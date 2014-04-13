<?php
/**
 * @file
 * hfl_bottom_donate_banner_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function hfl_bottom_donate_banner_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Wide vertical donation section at the bottom of the page.';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'donate_bottom_banner';
  $fe_block_boxes->body = '<h2>Donate to Home for Life</h2>

<p>Your donation provides the animals of Home for Life with food, veterinary care, toys and a beautiful facility to roam freely. 100% of donations go to helping these animals receive the medical care they need, as well as the affection and freedom to help them recover from illness, disability, mistreatment or neglect. With your help, these incredible animals can lead the full, safe and happy lives they deserve.</p>
';

  $export['donate_bottom_banner'] = $fe_block_boxes;

  return $export;
}
