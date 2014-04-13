<?php
/**
 * @file
 * hfl_requestavisit.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hfl_requestavisit_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-requestavisit-field_requestavisit_address'
  $field_instances['entityform-requestavisit-field_requestavisit_address'] = array(
    'bundle' => 'requestavisit',
    'default_value' => array(
      0 => array(
        'element_key' => 'entityform|request_a_visit|field_requestavisit_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => 'MN',
        'postal_code' => '',
        'country' => 'US',
        'organisation_name' => '',
        'first_name' => '',
        'last_name' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_requestavisit_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 'organisation',
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-requestavisit-field_requestavisit_contact'
  $field_instances['entityform-requestavisit-field_requestavisit_contact'] = array(
    'bundle' => 'requestavisit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_requestavisit_contact',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-requestavisit-field_requestavisit_date'
  $field_instances['entityform-requestavisit-field_requestavisit_date'] = array(
    'bundle' => 'requestavisit',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_requestavisit_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-requestavisit-field_requestavisit_email'
  $field_instances['entityform-requestavisit-field_requestavisit_email'] = array(
    'bundle' => 'requestavisit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'email_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_requestavisit_email',
    'label' => 'Email Address',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-requestavisit-field_requestavisit_notes'
  $field_instances['entityform-requestavisit-field_requestavisit_notes'] = array(
    'bundle' => 'requestavisit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_requestavisit_notes',
    'label' => 'Additional Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-requestavisit-field_requestavisit_pets'
  $field_instances['entityform-requestavisit-field_requestavisit_pets'] = array(
    'bundle' => 'requestavisit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If you\'d like any specific animals to come visit you, please list their names here. We unfortunately cannot guarantee that that any specific animal will be able to visit you on the day of your choosing, but we\'ll try our best to accomodate you!',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_requestavisit_pets',
    'label' => 'Pets',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-requestavisit-field_requestavisit_phone'
  $field_instances['entityform-requestavisit-field_requestavisit_phone'] = array(
    'bundle' => 'requestavisit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_requestavisit_phone',
    'label' => 'Phone Number',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Notes');
  t('Address');
  t('Date');
  t('Email Address');
  t('If you\'d like any specific animals to come visit you, please list their names here. We unfortunately cannot guarantee that that any specific animal will be able to visit you on the day of your choosing, but we\'ll try our best to accomodate you!');
  t('Name');
  t('Pets');
  t('Phone Number');

  return $field_instances;
}
