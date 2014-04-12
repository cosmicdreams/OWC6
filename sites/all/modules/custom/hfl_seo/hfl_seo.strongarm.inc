<?php
/**
 * @file
 * hfl_seo.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hfl_seo_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'checklistapi_checklist_seo_checklist';
  $strongarm->value = array(
    '#changed' => 1397336426,
    '#changed_by' => '1',
    '#completed_items' => 9,
    'add_to_google_places' => 0,
    'add_verifications' => 0,
    'authenticate_with_bing' => 0,
    'authenticate_with_google' => 0,
    'authenticate_with_google_analytics' => 0,
    'check_links' => 0,
    'configure_contact_google_analytics' => 0,
    'configure_metatag' => 0,
    'configure_metatags_quick' => 0,
    'configure_microdata' => 0,
    'configure_pathauto' => 0,
    'create_google_analytics_analytics' => 0,
    'download_internet_marketing_whitepapers' => 0,
    'enable_clean_urls' => array(
      '#completed' => 1397336021,
      '#uid' => '1',
    ),
    'get_google_account' => 0,
    'get_windows_live_id' => 0,
    'input_google_analytics_code' => 0,
    'install_admin_menu' => array(
      '#completed' => 1397336021,
      '#uid' => '1',
    ),
    'install_contact_google_analytics' => 0,
    'install_context_keywords' => 0,
    'install_drush' => array(
      '#completed' => 1397336021,
      '#uid' => '1',
    ),
    'install_ga_tokenizer' => 0,
    'install_globalredirect' => array(
      '#completed' => 1397336021,
      '#uid' => '1',
    ),
    'install_google_analytics' => array(
      '#completed' => 1397336426,
      '#uid' => '1',
    ),
    'install_htmlpurifier' => 0,
    'install_metatag' => array(
      '#completed' => 1397336021,
      '#uid' => '1',
    ),
    'install_metatags_quick' => 0,
    'install_microdata' => 0,
    'install_module_filter' => array(
      '#completed' => 1397336021,
      '#uid' => '1',
    ),
    'install_pathauto' => array(
      '#completed' => 1397336021,
      '#uid' => '1',
    ),
    'install_read_more' => 0,
    'install_redirect' => array(
      '#completed' => 1397336021,
      '#uid' => '1',
    ),
    'install_scheduler' => 0,
    'install_search404' => 0,
    'install_security_review' => 0,
    'install_seo_checker' => 0,
    'install_site_map' => 0,
    'install_site_verify' => 0,
    'install_xmlsitemap' => 0,
    'link_to_volacci' => 0,
    'mollom_spam_prevention' => 0,
    'read_drupal_6_seo_book' => 0,
    'send_feedback' => 0,
    'submit_xml_sitemap_to_bing' => 0,
    'submit_xml_sitemap_to_google' => 0,
    'validate_html' => 0,
    'volacci_automatr' => 0,
    'watch_drupalize_me_video' => 0,
  );
  $export['checklistapi_checklist_seo_checklist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_schema_installed';
  $strongarm->value = TRUE;
  $export['metatag_schema_installed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_categories_depth';
  $strongarm->value = 'all';
  $export['site_map_categories_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_css';
  $strongarm->value = 0;
  $export['site_map_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_forum_threshold';
  $strongarm->value = '-1';
  $export['site_map_forum_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_message';
  $strongarm->value = array(
    'value' => '',
    'format' => 'filtered_html',
  );
  $export['site_map_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_page_title';
  $strongarm->value = 'Site map';
  $export['site_map_page_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_rss_depth';
  $strongarm->value = 'all';
  $export['site_map_rss_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_rss_front';
  $strongarm->value = 'rss.xml';
  $export['site_map_rss_front'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_count';
  $strongarm->value = 1;
  $export['site_map_show_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_description';
  $strongarm->value = 1;
  $export['site_map_show_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_front';
  $strongarm->value = 1;
  $export['site_map_show_front'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_menus';
  $strongarm->value = array(
    'main-menu' => 'main-menu',
    'features' => 0,
    'management' => 0,
    'navigation' => 0,
    'user-menu' => 0,
  );
  $export['site_map_show_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_menus_hidden';
  $strongarm->value = 0;
  $export['site_map_show_menus_hidden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_rss_links';
  $strongarm->value = '1';
  $export['site_map_show_rss_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_titles';
  $strongarm->value = 1;
  $export['site_map_show_titles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_vocabularies';
  $strongarm->value = array(
    'tags' => 0,
  );
  $export['site_map_show_vocabularies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_term_threshold';
  $strongarm->value = '0';
  $export['site_map_term_threshold'] = $strongarm;

  return $export;
}
