<?php
/**
 * @file
 * hfl_requestavisit.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hfl_requestavisit_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'view_requestavisit_pets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Request a Visit: Pets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Profile Image */
  $handler->display->display_options['fields']['field_petprofile_profileimage']['id'] = 'field_petprofile_profileimage';
  $handler->display->display_options['fields']['field_petprofile_profileimage']['table'] = 'field_data_field_petprofile_profileimage';
  $handler->display->display_options['fields']['field_petprofile_profileimage']['field'] = 'field_petprofile_profileimage';
  $handler->display->display_options['fields']['field_petprofile_profileimage']['label'] = '';
  $handler->display->display_options['fields']['field_petprofile_profileimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_petprofile_profileimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_petprofile_profileimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Content: Friendly (field_petprofile_friendly) */
  $handler->display->display_options['filters']['field_petprofile_friendly_value']['id'] = 'field_petprofile_friendly_value';
  $handler->display->display_options['filters']['field_petprofile_friendly_value']['table'] = 'field_data_field_petprofile_friendly';
  $handler->display->display_options['filters']['field_petprofile_friendly_value']['field'] = 'field_petprofile_friendly_value';
  $handler->display->display_options['filters']['field_petprofile_friendly_value']['value'] = array(
    1 => '1',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_petprofile_profileimage' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['view_requestavisit_pets'] = $view;

  return $export;
}
