<?php
/**
 * @file
 * hfl_donate.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hfl_donate_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_donate_contact|entityform|donate|form';
  $field_group->group_name = 'group_donate_contact';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'donate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_donate_phone',
      1 => 'field_donate_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-donate-contact field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_donate_contact|entityform|donate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_donate_options_onetime|entityform|donate|form';
  $field_group->group_name = 'group_donate_options_onetime';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'donate';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_donate_options';
  $field_group->data = array(
    'label' => 'This is a one-time donation.',
    'weight' => '7',
    'children' => array(
      0 => 'field_donate_amount',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-donate-options-onetime field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_donate_options_onetime|entityform|donate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_donate_options_sponsor|entityform|donate|form';
  $field_group->group_name = 'group_donate_options_sponsor';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'donate';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_donate_options';
  $field_group->data = array(
    'label' => 'I\'d like to be a sponsor.',
    'weight' => '8',
    'children' => array(
      0 => 'field_donate_pet',
      1 => 'field_donate_payments',
      2 => 'field_donate_other',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-donate-options-sponsor field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_donate_options_sponsor|entityform|donate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_donate_options|entityform|donate|form';
  $field_group->group_name = 'group_donate_options';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'donate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '0',
    'children' => array(
      0 => 'group_donate_options_onetime',
      1 => 'group_donate_options_sponsor',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-donate-options field-group-htabs',
      ),
    ),
  );
  $export['group_donate_options|entityform|donate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_donate_tribute|entityform|donate|form';
  $field_group->group_name = 'group_donate_tribute';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'donate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Make this a tribute in memory or honor of a special person, pet or event.',
    'weight' => '1',
    'children' => array(
      0 => 'field_donate_tributetype',
      1 => 'field_donate_tributename',
      2 => 'field_donate_tributedate',
      3 => 'field_donate_tributedetails',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Make this a tribute in memory or honor of a special person, pet or event.',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-donate-tribute field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_donate_tribute|entityform|donate|form'] = $field_group;

  return $export;
}
