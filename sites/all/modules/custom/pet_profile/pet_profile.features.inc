<?php
/**
 * @file
 * pet_profile.features.inc
 */

/**
 * Implements hook_node_info().
 */
function pet_profile_node_info() {
  $items = array(
    'pet_profile' => array(
      'name' => t('Pet Profile'),
      'base' => 'node_content',
      'description' => t('Create a profile for a pet.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
