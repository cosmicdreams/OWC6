<?php
/**
 * @file
 * hfl_triptych.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hfl_triptych_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hfl_triptych_node_info() {
  $items = array(
    'triptych' => array(
      'name' => t('Triptych'),
      'base' => 'node_content',
      'description' => t('Create block content for the 3 front page blocks'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
