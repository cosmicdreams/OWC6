<?php
/**
 * @file
 * hfl_pet_activity.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hfl_pet_activity_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_petactivity_pet'
  $field_bases['field_petactivity_pet'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_petactivity_pet',
    'foreign keys' => array(),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'pet_profile' => 'pet_profile',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
