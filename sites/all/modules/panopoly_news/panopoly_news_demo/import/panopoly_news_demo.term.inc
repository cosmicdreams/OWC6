<?php

/**
 * @file
 * Base Migrations for Taxonomy Terms used in Panopoly News Demo.
 */

class PanopolyNewsDemoTerm extends Migration {

  public function __construct($arguments = array()) {
    parent::__construct($arguments = array());
    $this->description = t('Import taxonomy terms.');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'name' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $import_path = drupal_get_path('module', 'panopoly_news_demo') . '/import/data/';
    $this->source = new MigrateSourceCSV($import_path . 'panopoly_news_demo.term.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationTerm('panopoly_categories');
    $this->addFieldMapping('name', 'name');
  }

  protected function csvcolumns() {
    $columns[0] = array('name', 'Name');
    return $columns;
  }
}
