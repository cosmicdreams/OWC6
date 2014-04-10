<?php

/**
 * @file
 * Migrations for Basic Nodes used in Panopoly News Demo.
 */

class PanopolyNewsDemoNode extends Migration {

  public function __construct($arguments = array()) {
    parent::__construct($arguments = array());
    $this->description = t('Import News nodes.');
    $this->dependencies = array('PanopolyNewsDemoTerm');

    // Create a map object for tracking the relationships between source rows.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $import_path = drupal_get_path('module', 'panopoly_news_demo') . '/import/data/';

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'panopoly_news_demo.node.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('panopoly_news_article');

    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('language')->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('title', 'title');

    $this->addFieldMapping('field_featured_image', 'image');
    $this->addFieldMapping('field_featured_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_featured_image:source_dir')
      ->defaultValue(drupal_get_path('module', 'panopoly_news_demo') . '/import/images');

    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')->defaultValue('panopoly_wysiwyg_text');
    $this->addFieldMapping('created', 'created');

    $this->addFieldMapping('field_featured_categories', 'categories')
       ->separator(', ');
    $this->addFieldMapping('field_featured_categories:create_term')
      ->defaultValue(TRUE);
  }

  protected function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('image', 'Image');
    $columns[2] = array('image_title', 'Image title');
    $columns[3] = array('image_alt', 'Image alt');
    $columns[4] = array('categories', 'Categories');
    $columns[5] = array('body', 'Body');
    $columns[6] = array('created', 'Created');
    return $columns;
  }

}
