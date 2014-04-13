<?php
/**
 * @file
 * hfl_bottom_donate_banner_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function hfl_bottom_donate_banner_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-donate_bottom_banner'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'donate_bottom_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'homeforlife' => array(
        'region' => 'donate',
        'status' => 1,
        'theme' => 'homeforlife',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
