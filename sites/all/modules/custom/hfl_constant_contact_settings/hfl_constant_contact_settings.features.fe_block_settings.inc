<?php
/**
 * @file
 * hfl_constant_contact_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function hfl_constant_contact_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['constant_contact-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'constant_contact',
    'node_types' => array(),
    'pages' => 'user*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'Join our Email List',
    'visibility' => 0,
  );

  return $export;
}
