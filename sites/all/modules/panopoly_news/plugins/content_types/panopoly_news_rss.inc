<?php

/**
 * @file
 * A panel plugin to provide an RSS link to the news
 */

$plugin = array(
  'title' => t('RSS'),
  'description' => t('This is a link to an RSS feed of the latest News'),
  'content_types' => array('panopoly_news_rss'),
  'category' => t('News'),
  'single' => TRUE,
);

/**
  * Implementation of hook_CONTENT_TYPE_content_type_render()
  */
function panopoly_news_panopoly_news_rss_content_type_render($subtype, $conf, $panel_args, $context) {
  $pane = new stdClass();
  $pane->content = theme_feed_icon(array('title' => 'News from ' . variable_get('site_name'), 'url' => 'news/rss'));
  return $pane;
}
