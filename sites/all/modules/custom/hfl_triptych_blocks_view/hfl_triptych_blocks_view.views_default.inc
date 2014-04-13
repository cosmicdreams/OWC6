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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Triptych image */
  $handler->display->display_options['fields']['field_triptych_image']['id'] = 'field_triptych_image';
  $handler->display->display_options['fields']['field_triptych_image']['table'] = 'field_data_field_triptych_image';
  $handler->display->display_options['fields']['field_triptych_image']['field'] = 'field_triptych_image';
  $handler->display->display_options['fields']['field_triptych_image']['label'] = '';
  $handler->display->display_options['fields']['field_triptych_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_triptych_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_triptych_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Triptych message */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Triptych message';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Triptych link */
  $handler->display->display_options['fields']['field_triptych_link']['id'] = 'field_triptych_link';
  $handler->display->display_options['fields']['field_triptych_link']['table'] = 'field_data_field_triptych_link';
  $handler->display->display_options['fields']['field_triptych_link']['field'] = 'field_triptych_link';
  $handler->display->display_options['fields']['field_triptych_link']['label'] = '';
  $handler->display->display_options['fields']['field_triptych_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_triptych_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_triptych_link']['type'] = 'link_plain';
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

  /* Display: Triptych center */
  $handler = $view->new_display('block', 'Triptych center', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Triptych center block';

  /* Display: Triptych right */
  $handler = $view->new_display('block', 'Triptych right', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Triptych center block';
  $export['triptych_blocks'] = $view;

  return $export;
}
