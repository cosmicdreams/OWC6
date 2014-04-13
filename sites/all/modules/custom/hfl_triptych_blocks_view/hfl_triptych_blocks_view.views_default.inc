<?php
/**
 * @file
 * hfl_triptych_blocks_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hfl_triptych_blocks_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'triptych_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Triptych blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Triptych blocks';
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'feature';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="feature-hd feature-hd_simple"><h3 class="hdg_7" >[title]</h3></div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Triptych image */
  $handler->display->display_options['fields']['field_triptych_image']['id'] = 'field_triptych_image';
  $handler->display->display_options['fields']['field_triptych_image']['table'] = 'field_data_field_triptych_image';
  $handler->display->display_options['fields']['field_triptych_image']['field'] = 'field_triptych_image';
  $handler->display->display_options['fields']['field_triptych_image']['label'] = '';
  $handler->display->display_options['fields']['field_triptych_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_triptych_image']['element_class'] = 'feature-md';
  $handler->display->display_options['fields']['field_triptych_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_triptych_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_triptych_image']['settings'] = array(
    'image_style' => 'triptych',
    'image_link' => '',
  );
  /* Field: Triptych message */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Triptych message';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'feature-bd';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Triptych link */
  $handler->display->display_options['fields']['field_triptych_link']['id'] = 'field_triptych_link';
  $handler->display->display_options['fields']['field_triptych_link']['table'] = 'field_data_field_triptych_link';
  $handler->display->display_options['fields']['field_triptych_link']['field'] = 'field_triptych_link';
  $handler->display->display_options['fields']['field_triptych_link']['label'] = '';
  $handler->display->display_options['fields']['field_triptych_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_triptych_link']['alter']['text'] = '[field_triptych_link]';
  $handler->display->display_options['fields']['field_triptych_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_triptych_link']['alter']['path'] = '[field_triptych_link-url]';
  $handler->display->display_options['fields']['field_triptych_link']['alter']['link_class'] = 'button';
  $handler->display->display_options['fields']['field_triptych_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_triptych_link']['element_class'] = 'feature-ft';
  $handler->display->display_options['fields']['field_triptych_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_triptych_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_triptych_link']['type'] = 'link_title_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'triptych' => 'triptych',
  );
  /* Filter criterion: Content: Triptych positon (field_triptych_positon) */
  $handler->display->display_options['filters']['field_triptych_positon_value']['id'] = 'field_triptych_positon_value';
  $handler->display->display_options['filters']['field_triptych_positon_value']['table'] = 'field_data_field_triptych_positon';
  $handler->display->display_options['filters']['field_triptych_positon_value']['field'] = 'field_triptych_positon_value';
  $handler->display->display_options['filters']['field_triptych_positon_value']['value'] = array(
    2 => '2',
  );

  /* Display: Triptych left */
  $handler = $view->new_display('block', 'Triptych left', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Triptych left block';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'triptych' => 'triptych',
  );
  /* Filter criterion: Content: Triptych positon (field_triptych_positon) */
  $handler->display->display_options['filters']['field_triptych_positon_value']['id'] = 'field_triptych_positon_value';
  $handler->display->display_options['filters']['field_triptych_positon_value']['table'] = 'field_data_field_triptych_positon';
  $handler->display->display_options['filters']['field_triptych_positon_value']['field'] = 'field_triptych_positon_value';
  $handler->display->display_options['filters']['field_triptych_positon_value']['value'] = array(
    1 => '1',
  );

  /* Display: Triptych center */
  $handler = $view->new_display('block', 'Triptych center', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Triptych center block';

  /* Display: Triptych right */
  $handler = $view->new_display('block', 'Triptych right', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Triptych center block';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'triptych' => 'triptych',
  );
  /* Filter criterion: Content: Triptych positon (field_triptych_positon) */
  $handler->display->display_options['filters']['field_triptych_positon_value']['id'] = 'field_triptych_positon_value';
  $handler->display->display_options['filters']['field_triptych_positon_value']['table'] = 'field_data_field_triptych_positon';
  $handler->display->display_options['filters']['field_triptych_positon_value']['field'] = 'field_triptych_positon_value';
  $handler->display->display_options['filters']['field_triptych_positon_value']['value'] = array(
    3 => '3',
  );
  $export['triptych_blocks'] = $view;

  return $export;
}
