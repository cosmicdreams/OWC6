<?php
/**
 * @file
 * hfl_triptych_blocks_view.features.inc
 */

/**
 * Implements hook_views_api().
 */
function hfl_triptych_blocks_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function hfl_triptych_blocks_view_image_default_styles() {
  $styles = array();

  // Exported image style: triptych.
  $styles['triptych'] = array(
    'name' => 'triptych',
    'label' => 'triptych',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 135,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
