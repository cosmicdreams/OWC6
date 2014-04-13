<?php
/**
 * @file
 * hfl_slide_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hfl_slide_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hfl_slide_content_type_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => t('Use this to create front page slides.  '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
