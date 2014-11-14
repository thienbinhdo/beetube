<?php
/**
 * @file
 * image_feature.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function image_feature_image_default_styles() {
  $styles = array();

  // Exported image style: thumbai__345_x_195_.
  $styles['thumbai__345_x_195_'] = array(
    'name' => 'thumbai__345_x_195_',
    'label' => 'thumbai (345 x 195)',
    'effects' => array(
      1 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 345,
          'height' => 195,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbail_300_x_168_.
  $styles['thumbail_300_x_168_'] = array(
    'name' => 'thumbail_300_x_168_',
    'label' => 'thumbail( 300 x 168)',
    'effects' => array(
      3 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 300,
          'height' => 168,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbail_360x_200_.
  $styles['thumbail_360x_200_'] = array(
    'name' => 'thumbail_360x_200_',
    'label' => 'thumbail(360x 200)',
    'effects' => array(
      4 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 360,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbail__870_x_489_.
  $styles['thumbail__870_x_489_'] = array(
    'name' => 'thumbail__870_x_489_',
    'label' => 'thumbail (870 x 489)',
    'effects' => array(
      2 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 870,
          'height' => 489,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
