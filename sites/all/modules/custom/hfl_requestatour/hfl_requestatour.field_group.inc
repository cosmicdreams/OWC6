<?php
/**
 * @file
 * hfl_requestatour.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hfl_requestatour_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_requestatour_contact|entityform|requestatour|form';
  $field_group->group_name = 'group_requestatour_contact';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'requestatour';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_requestatour_name',
      1 => 'field_requestatour_phone',
      2 => 'field_requestatour_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-requestatour-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_requestatour_contact|entityform|requestatour|form'] = $field_group;

  return $export;
}
