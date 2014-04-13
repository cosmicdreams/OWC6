<?php
/**
 * @file
 * hfl_mission_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function hfl_mission_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Mission statement on front page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'front_mission_block';
  $fe_block_boxes->body = '<h2>What Is The Third Door?</h2>

<p>Most shelters and rescues offer two options for animals: adoption or euthanasia. Home for Life offers a third option for cats and dogs who are old, or who have disabilities, health or temperament problems. We created "The Third Door," a new concept in animal rescue and welfare where special animals have options previously unavailable. Home for Life animals enjoy a quality life, where they can be themselves, run and play, and be loved and cherished for as long as they live.</p>
';

  $export['front_mission_block'] = $fe_block_boxes;

  return $export;
}
