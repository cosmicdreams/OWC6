<?php
/**
 * Implement hook_field_convert_info().
 *
 * Return an array describing field migration plans.
 *
 * Assumptions this plan makes:
 *  - core upgrade will have converted the {files} table and its entries to
 *    a {file_managed} table. In particular: the 'filename' column is now 'uri', and its
 *    value changed thus: s[sites/default][public://]
 */ 
function image_legacy_field_convert_info() {
  /*
  TODO:
  
  - create a normal node type
  - convert image derivatives to image styles.
  - clean up original {file_managed} entries
  - delete non-original files and {file_managed} entries
  
  */
  
  // Get the maximum upload dimensions from image_legacy module to set on the new field.
  $sizes = image_get_sizes();
  $max_width  = $sizes['_original']['width'];
  $max_height = $sizes['_original']['height'];
  if (is_numeric($max_width) && is_numeric($max_height)) {
     $max_resolution = $max_width . 'x' . $max_height;
  }
  else {
    $max_resolution = '';
  }
  
  return array(
    'image_d6' => array(
      // Basics about this field migration plan
      'title' => t('Image'),
      'description' => t('Image module conversion to image field.'),
      // Required modules
      'dependencies' => array(
        'image',
      ),
      'files' => array(
        // array of files to include
        __FILE__,
      ),
      // The entity type that this plan operates on, eg 'node', 'user', 'comment'.
      // Further information about this entity type will be retrieved from hook_entity_info(). 
      'entity_type' => 'node',
      
      
      // How to determine if this plan has run or not.
      'has_run' => array(
        // Simple form: give the name of a table which exists if the plan has not run yet
        // (and therefore which the plan should rename as part of its work).
        'table_exists' => 'image',
        // @todo: allow a full query to be specified here for complex cases.
      ),
      
      // We need to create a node type.
      'bundles' => array(
        'image' => array(
          'status'  => 'create', 
          // can be one of:
          // - 'create' -- TODO
          // - 'convert' -- for modules that used hook_node_info() on D6.
          'type'        => 'image',
          'name'        => 'Image',
          'description' => 'An image (with thumbnail). This is ideal for publishing photographs or screenshots.',
        ),
      ),
      
      // The fields we will need to create or use.
      // An array of one or more fields and instances, keyed by whatever you like
      // (field name is nice though).
      'fields' => array(
        'node_image' => array(
          // Whether we need to create a new field and instances or not.
          // one of:
          //  - create // create the field and instances 
          //  - create instance // the field exists; create one or more instances of it
          //  - exists // the field and instance already exist. @TODO: add support for this!
          'status'      => 'create',

          // Information about the field to create.
          // This is a standard FieldAPI array suitable for passing to field_create_field().
          // @see <http://drupal.org/node/474420>.
          // Some useful information: $field_type_options = field_ui_field_type_options();
          'field' => array(
            'field_name'  => 'node_image',
            'type'        => 'image',
            'cardinality' => 1, // single value
            'settings'    => array(
              'required'  => TRUE,
              'file_directory' => variable_get('image_default_path', 'images'),
              'file_extensions' => 'png gif jpg jpeg',
              'max_filesize' => variable_get('image_max_upload_size', 800) . 'k', // Image module stores an integer representing kilobytes.
              'max_resolution' => $max_resolution,
              'min_resolution' => '',
              //'alt_field' => true,
              //'title_field' => '',
            ),
          ),

          // FieldAPI instances arrays.
          // An array of one or more instances of this field, keyed by whatever you like.
          'instances' => array(
            // This is a standard FieldAPI array suitable for passing to field_create_instance()
            // although the 'object_type' and 'field_name' keys are filled in for you.
            // Some useful information: include_once('modules/field_ui/field_ui.admin.inc'); $widget_type_options = field_ui_widget_type_options(NULL, TRUE); dsm($widget_type_options);
            'all' => array(
              'label'       => t('Image'),
              'description' => t('Select an image to upload.'),
              'bundle'      => 'image',
              'widget'      => array(
                'type'      => 'image_image',
                'module'    => 'image',
                'weight'    => -1,
                'settings' => array(
                  'progress_indicator' => 'throbber',
                  'preview_image_style' => 'thumbnail',
                ),
              ),
            ),
          ),
        ),
        // Add more fields here
      ),
      
      // How to get all the objects we need to operate on
      'list' => array(
        'query_method' => 'dynamic', // DBTNG baby! todo: support static queries too?
        'query' => array(
          // this is an array of stuff to build the query object with
          // we'll use the standard abbreviation of the first letter of this!
          'conditions' => array(
            // arrays of parameters suitable for passing to the $query as conditions
            // each array here is passed as $query->([the array])
            array('n.type', 'image', '='),
          ),
          /*
          'fields' => array('wackyfield'), 
          // If your loader needs extra fields, list them here. The id field is included automatically.
          // @todo: is this needed?
          */
        ),
      ),
      
      // How to load each object we manipulate.
      // @todo: we can maybe omit this entire section and just assume the entity_load() function?
      'load' => array(
        'load_method' => 'entity', 
        // can be one of:
        // - entity: use the core entity_load() function. In which case, specify 'conditions' to pass.
        // - callback: use your own function. specify the 'load_callback' and 'load_arguments'
        // - query: specify a query in 'query'. eg:
        // 'query' => "SELECT nid FROM {node} WHERE nid > %d AND type = 'article' ORDER BY nid ASC",
        // the query that loads us the objects we need
      ),
      
      // How to manipulate each object: take values from one property and put them in another.
      'manipulate' => array(
        // hook_field_convert_load() is called on each object.
        'property_conversions' => array(
          array('images_image_original' => 'node_image'),
          //array('title' => 'title'),
          //array('title' => 'alt'),
        ),
        // 'post_process' => optional callback to run after manipulation. Use this to tidy up data, move files, etc.
      ),
      
      // How to save the entity once we are done.
      'save' => 'node_save', // @todo: assume this is ENTITYTYPE_save unless specified?
      
    ),
  );
}

/**
 * Implement hook_field_convert_object_pre_load().
 *
 * Clean up the {file_managed} table entries for the current image node.
 */
function image_legacy_field_convert_object_pre_load($id, $plan) {
  // The incoming object id is a node id.
  $nid = $id;
  
  // Get all files for this image node.
  $query = db_select('files', 'f');
  $query->join('image', 'i', 'f.fid = i.fid');
  $query->condition('i.nid', $nid, '=')
    ->fields('f');
  $result = $query->execute();
  $files = $result->fetchAllAssoc('fid', PDO::FETCH_ASSOC);  
  //dsm($files);
  
  // Convert entries in {files} to ones in {managed_file}.
  // Bits cribbed from system_update_7061() which REALLY SHOULD BE PROVIDING
  // THAT CODE AS HELPER FUNCTIONS FOR REUSE BY CONTRIB.
  $basename = variable_get('file_directory_path', conf_path() . '/files');
  $scheme = file_default_scheme() . '://';

  foreach ($files as $file) {
    //watchdog('fc', "handling file $file[fid] , $file[filename]");

    if ($file['filename'] == '_original') {
      // Original file: clean it up.
      // Unfudge the filename: Image module has kludgingly stored the image
      // derivative size in this column since time immemorial. 
      $file['filename'] = basename($file['filepath']);
      
      // We will convert filepaths to uri using the default scheme
      // and stripping off the existing file directory path.
      $file['uri'] = $scheme . str_replace($basename, '', $file['filepath']);
      $file['uri'] = file_stream_wrapper_uri_normalize($file['uri']);
      unset($file['filepath']);
      
      // Insert the file into the {file_managed} table.
      $new_fid = db_insert('file_managed')
        ->fields(array(
          'uid' => $file['uid'],
          'filename' => $file['filename'],
          'uri' => $file['uri'],
          'filemime' => $file['filemime'],
          'filesize' => $file['filesize'],
          'status' => $file['status'],
          'timestamp' => $file['timestamp'],
        ))
        ->execute(); 
        
      //dsm($new_fid);     
      
      // Add the usage entry for the file.
      $file = (object) $file;
      file_usage_add($file, 'image', 'node', $nid);
      
      // Update {image} with the new file ID.
      // NOTE: this is possibly redundant, what with {file_usage} which effectively
      // holds the same information, which we only need for the next step in
      // image_legacy_field_convert_load() anyway.
      $num_updated = db_update('image')
        ->fields(array(
          'fid' => $new_fid,
        ))
        ->condition('nid', $nid)
        ->condition('image_size', '_original')
        ->execute();      
    }
    else {
      // Derivative file. 
      // Delete it.
      file_unmanaged_delete($file['filepath']);
    }
  }
  
  return;
  
  /*
  Note: the above code filters the files by their kludgy filename property.
  Should this prove problematic, the following code get the derivative size 
  of each file direct from the image table. 
  I'm leaving it here in case it is needed.
  */
  /*
  $query = db_select('file', 'f');
  $query->join('image', 'i', 'f.fid = i.fid');
  $query->condition('i.nid', $id, '=')
    ->fields('f')
    ->fields('i');
  $result = $query->execute();

  $files = $result->fetchAll();
  
  // Clean up each file.
  foreach ($files as $file) {
    
    if ($file->image_size == '_original') {
      // Original file: clean it up.
      // Unfudge the filename: Image module has kludgingly stored the image
      // derivative size in this column since time immemorial. 
      $file->filename = basename($file->uri);
      
      // Argh WTF this sets the filesize to 0.
      //file_save($file);
      
      // Update the filename.
      $query = db_update('file')
        ->fields(array(
          'filename' => $file->filename,
        ))
        ->condition('fid', $file->fid, '=')
        ->execute();
      
    }
    else {
      // Derivative file. 
      // Delete it.
      $file_object
      $query = db_delete('file')
        ->condition('fid', $file->fid, '=')
        ->execute();
    }
    
    dsm($file);
  }
  
  return;
  */
}

/**
 * Implement hook_field_convert_load().
 */
function image_legacy_field_convert_load(&$object) {
  /*
  notes:
  
  - we only want _originals
  - we can clean up and delete deriv files from both the disk AND the DB: derivs in D7 do not appear in the DB.
  - we have to clean up our crap in the files table: fix hacky filenames! we can do this as we come to each image, 
    since there is a 1-1 correspondence with image nodes
  
  query:
  -
  
  */
  // We have already deleted the derivative files: we get only originals here.
  $result = db_query("SELECT * FROM {image} i LEFT JOIN {file_managed} f ON i.fid = f.fid WHERE i.nid = :nid AND i.image_size = '_original'", array(':nid' => $object-> nid));


  foreach ($result as $record) {
    //dsm($record);
    // Load just the tids into a dummy property on the object, so the core API can do its work with FieldAPI
    // cardinality and language and all that malarkey.
    $object->images_image_original = $record->fid;
  }
  
  //dsm($object);
  
  return;
  
  //////////
  
  
  // The code to load from {term_user} is gone, so we have to do it ourselves here.
  // Assume that taxonomy has already been upgraded and so it's the new table name for that
  $result = db_query("SELECT tu.*, ttd.vid FROM {term_user} tu LEFT JOIN {taxonomy_term_data} ttd ON tu.tid = ttd.tid WHERE tu.uid = :uid", array(':uid' => $object->uid));

  /*
  $query = db_select('term_user', 'tu')
    ->fields('tu')
    ->fields('ttd')
    ->condition('tu.uid', $object->uid, '=');
  $query->join('taxonomy_term_data', 'ttd', 'tu.tid = ttd.tid ');
  $result = $query->execute();
  // AAAAAAAAAAAAAAAAAAAAAAAARGH fail.
  */

  foreach ($result as $record) {
    //dsm($record);
    // Load just the tids into a dummy property on the object, so the core API can do its work with FieldAPI
    // cardinality and language and all that malarkey.
    $object->{'term_user_' . $record->vid}[] = $record->tid;
  }
}

