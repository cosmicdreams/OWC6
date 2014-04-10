<?php
/**
 * @file
 * panopoly_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panopoly_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "pipelines") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function panopoly_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function panopoly_news_node_info() {
  $items = array(
    'panopoly_news_article' => array(
      'name' => t('News Article'),
      'base' => 'node_content',
      'description' => t('An article of news to be featured and used widely on the site!'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
