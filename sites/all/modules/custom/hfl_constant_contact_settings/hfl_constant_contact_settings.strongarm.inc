<?php
/**
 * @file
 * hfl_constant_contact_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hfl_constant_contact_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_block_lists_1';
  $strongarm->value = array(
    1 => '1',
  );
  $export['cc_block_lists_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_block_list_selection_format_1';
  $strongarm->value = 'checkbox';
  $export['cc_block_list_selection_format_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_block_redirect_url_1';
  $strongarm->value = 'email-signup-thankyou';
  $export['cc_block_redirect_url_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_block_show_list_selection_1';
  $strongarm->value = '1';
  $export['cc_block_show_list_selection_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_contact_list_sort_order';
  $strongarm->value = 'SortOrder';
  $export['cc_contact_list_sort_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_default_opt_in';
  $strongarm->value = 1;
  $export['cc_default_opt_in'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_email_field_position_1';
  $strongarm->value = '1';
  $export['cc_email_field_position_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_extra_fields';
  $strongarm->value = array(
    0 => 'First Name',
    1 => 'Middle Name',
    2 => 'Last Name',
    3 => 'Job Title',
    4 => 'Company Name',
    5 => 'Home Phone',
    6 => 'Work Phone',
    7 => 'Addr1',
    8 => 'Addr2',
    9 => 'Addr3',
    10 => 'City',
    11 => 'State Code',
    12 => 'State Name',
    13 => 'Country Code',
    14 => 'Country Name',
    15 => 'Postal Code',
    16 => 'Sub Postal Code',
    17 => 'Note',
    18 => 'CustomField1',
    19 => 'CustomField2',
    20 => 'CustomField3',
    21 => 'CustomField4',
    22 => 'CustomField5',
    23 => 'CustomField6',
    24 => 'CustomField7',
    25 => 'CustomField8',
    26 => 'CustomField9',
    27 => 'CustomField10',
    28 => 'CustomField11',
    29 => 'CustomField12',
    30 => 'CustomField13',
    31 => 'CustomField14',
    32 => 'CustomField15',
  );
  $export['cc_extra_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_extra_field_mappings';
  $strongarm->value = 'FirstName:field_first_name, MiddleName:field_middle_name, LastName:field_last_name, JobTitle:field_job_title, CompanyName:field_company_name, HomePhone:field_home_phone, WorkPhone:field_work_phone, Addr1:field_addr1, Addr2:field_addr2, Addr3:field_addr3, City:field_city, StateCode:field_state_code, StateName:field_state_name, CountryCode:field_country_code, CountryName:field_country_name, PostalCode:field_postal_code, SubPostalCode:field_sub_postal_code, Note:field_note, CustomField1:field_customfield1, CustomField2:field_customfield2, CustomField3:field_customfield3, CustomField4:field_customfield4, CustomField5:field_customfield5, CustomField6:field_customfield6, CustomField7:field_customfield7, CustomField8:field_customfield8, CustomField9:field_customfield9, CustomField10:field_customfield10, CustomField11:field_customfield11, CustomField12:field_customfield12, CustomField13:field_customfield13, CustomField14:field_customfield14, CustomField15:field_customfield15';
  $export['cc_extra_field_mappings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_form_block_fields_1';
  $strongarm->value = array(
    'First Name' => 'First Name',
    'Last Name' => 'Last Name',
    'Middle Name' => 0,
    'Job Title' => 0,
    'Company Name' => 0,
    'Home Phone' => 0,
    'Work Phone' => 0,
    'Addr1' => 0,
    'Addr2' => 0,
    'Addr3' => 0,
    'City' => 0,
    'State Code' => 0,
    'State Name' => 0,
    'Country Code' => 0,
    'Country Name' => 0,
    'Postal Code' => 0,
    'Sub Postal Code' => 0,
    'Note' => 0,
  );
  $export['cc_form_block_fields_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_lists';
  $strongarm->value = array();
  $export['cc_lists'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_lists_cache_expire';
  $strongarm->value = '3600';
  $export['cc_lists_cache_expire'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_list_selection_description_1';
  $strongarm->value = 'Get news and updates from Home for Life.  ';
  $export['cc_list_selection_description_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_list_selection_format';
  $strongarm->value = 'select';
  $export['cc_list_selection_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_list_selection_title_1';
  $strongarm->value = 'Join our Mailing List';
  $export['cc_list_selection_title_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_password';
  $strongarm->value = 'odie328';
  $export['cc_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_path';
  $strongarm->value = 'sites/all/modules/contrib/constant_contact';
  $export['cc_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_register_page_method';
  $strongarm->value = 'none';
  $export['cc_register_page_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_show_format_choice';
  $strongarm->value = 0;
  $export['cc_show_format_choice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_show_format_choice_1';
  $strongarm->value = 0;
  $export['cc_show_format_choice_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_signup_description';
  $strongarm->value = 'Select your areas of interest / would you like to receive the newsletter?';
  $export['cc_signup_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_signup_title';
  $strongarm->value = 'Subscribe to the Newsletter';
  $export['cc_signup_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_subscribe_format';
  $strongarm->value = 'HTML';
  $export['cc_subscribe_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_subscribe_format_1';
  $strongarm->value = 'HTML';
  $export['cc_subscribe_format_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_sync_unsubscribed_users';
  $strongarm->value = 0;
  $export['cc_sync_unsubscribed_users'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_total_blocks_available';
  $strongarm->value = '1';
  $export['cc_total_blocks_available'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cc_username';
  $strongarm->value = 'lisa.micallef';
  $export['cc_username'] = $strongarm;

  return $export;
}
