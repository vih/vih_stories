<?php

/**
 * @file
 *  Migrations for vih_stories.
 */

/**
 * VIH Stories
 */
class VIHStoriesNode extends VIHMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import story nodes.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'vih_stories') . '/import/stories.csv', $this->csvcolumns(), array('header_rows' => 1), $this->fields());

    $this->destination = new MigrateDestinationNode('story');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'description');
    $this->addFieldMapping('body:format')
      ->defaultValue('panopoly_wysiwyg_text');

    // Images
    $this->addFieldMapping('field_pictures', 'all_images');
    $this->addFieldMapping('field_pictures:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_pictures:source_dir')
      ->defaultValue(drupal_get_path('module', 'vih_stories') . '/import/images');
  }

  function fields() {
    return array(
      'all_images' => 'An array of images, populated during prepareRow().',
    );
  }

  public function prepareRow($row) {
    $row->all_images = explode(',', $row->images);
  }

  function csvcolumns() {
    $columns[0] = array('id', 'Id');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('description', 'Description');
    $columns[3] = array('images', 'Images');
    $columns[4] = array('teacher_reference', 'Teacher');
    return $columns;
  }
}
