<?php
/**
 * @file
 * hfl_featured_pets.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hfl_featured_pets_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured_pets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured pets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="feature-hd feature-hd_simple"><h3 class="hdg_7" >[title]</h3></div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Profile Image */
  $handler->display->display_options['fields']['field_petprofile_profileimage']['id'] = 'field_petprofile_profileimage';
  $handler->display->display_options['fields']['field_petprofile_profileimage']['table'] = 'field_data_field_petprofile_profileimage';
  $handler->display->display_options['fields']['field_petprofile_profileimage']['field'] = 'field_petprofile_profileimage';
  $handler->display->display_options['fields']['field_petprofile_profileimage']['label'] = '';
  $handler->display->display_options['fields']['field_petprofile_profileimage']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_petprofile_profileimage']['element_class'] = 'feature-md';
  $handler->display->display_options['fields']['field_petprofile_profileimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_petprofile_profileimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_petprofile_profileimage']['settings'] = array(
    'image_style' => 'triptych',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'feature-bd';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Naked title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['ui_name'] = 'Naked title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Visit text */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Visit text';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Visit [title_2]';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'feature-ft';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pet_profile' => 'pet_profile',
  );
  /* Filter criterion: Content: Featured (field_petprofile_featured) */
  $handler->display->display_options['filters']['field_petprofile_featured_value']['id'] = 'field_petprofile_featured_value';
  $handler->display->display_options['filters']['field_petprofile_featured_value']['table'] = 'field_data_field_petprofile_featured';
  $handler->display->display_options['filters']['field_petprofile_featured_value']['field'] = 'field_petprofile_featured_value';
  $handler->display->display_options['filters']['field_petprofile_featured_value']['operator'] = 'and';
  $handler->display->display_options['filters']['field_petprofile_featured_value']['value'] = array(
    'Yes' => 'Yes',
  );

  /* Display: Front featured pets */
  $handler = $view->new_display('block', 'Front featured pets', 'block');
  $export['featured_pets'] = $view;

  return $export;
}
