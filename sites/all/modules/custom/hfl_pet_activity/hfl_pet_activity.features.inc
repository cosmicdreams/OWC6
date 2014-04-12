<?php
/**
 * @file
 * hfl_pet_activity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hfl_pet_activity_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hfl_pet_activity_node_info() {
  $items = array(
    'pet_activity' => array(
      'name' => t('Pet Activity'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
