<?php
/**
 * @file
 * hfl_coming_events_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hfl_coming_events_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'coming_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Coming events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Coming events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = 'Time';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_event_description']['id'] = 'field_event_description';
  $handler->display->display_options['fields']['field_event_description']['table'] = 'field_data_field_event_description';
  $handler->display->display_options['fields']['field_event_description']['field'] = 'field_event_description';
  /* Field: Content: Gallery Images */
  $handler->display->display_options['fields']['field_event_gallery_images']['id'] = 'field_event_gallery_images';
  $handler->display->display_options['fields']['field_event_gallery_images']['table'] = 'field_data_field_event_gallery_images';
  $handler->display->display_options['fields']['field_event_gallery_images']['field'] = 'field_event_gallery_images';
  $handler->display->display_options['fields']['field_event_gallery_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_gallery_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_event_gallery_images']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = 'Location (click for map)';
  $handler->display->display_options['fields']['field_event_location']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['alter']['path'] = 'http://maps.google.com/?q=[field_event_location]';
  $handler->display->display_options['fields']['field_event_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_event_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Sponsor */
  $handler->display->display_options['fields']['field_event_sponsor']['id'] = 'field_event_sponsor';
  $handler->display->display_options['fields']['field_event_sponsor']['table'] = 'field_data_field_event_sponsor';
  $handler->display->display_options['fields']['field_event_sponsor']['field'] = 'field_event_sponsor';
  /* Field: Content: Sponsor Logo */
  $handler->display->display_options['fields']['field_event_sponsor_logo']['id'] = 'field_event_sponsor_logo';
  $handler->display->display_options['fields']['field_event_sponsor_logo']['table'] = 'field_data_field_event_sponsor_logo';
  $handler->display->display_options['fields']['field_event_sponsor_logo']['field'] = 'field_event_sponsor_logo';
  $handler->display->display_options['fields']['field_event_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_sponsor_logo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Sort criterion: Content: Date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
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
    'events' => 'events',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'coming-events';
  $handler->display->display_options['menu']['title'] = 'Coming events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['coming_events'] = $view;

  return $export;
}
