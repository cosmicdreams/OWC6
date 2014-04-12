<?php
/**
 * @file
 * hfl_requestavisit.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hfl_requestavisit_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_requestavisit_contact|entityform|request_a_visit|form';
  $field_group->group_name = 'group_requestavisit_contact';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'requestavisit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_requestavisit_contact',
      1 => 'field_requestavisit_phone',
      2 => 'field_requestavisit_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-requestavisit-contact field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_requestavisit_contact|entityform|request_a_visit|form'] = $field_group;

  return $export;
}
