<?php
/**
 * @file
 * panopoly_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panopoly_faq_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function panopoly_faq_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function panopoly_faq_node_info() {
  $items = array(
    'panopoly_faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => t('This is a frequently asked question and an appropriate answer!'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
  );
  return $items;
}
