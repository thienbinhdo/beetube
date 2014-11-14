<?php
/**
 * @file
 * flag_feature.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function flag_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "Like".
  $flags['like'] = array(
    'entity_type' => 'node',
    'title' => 'Like',
    'global' => 0,
    'types' => array(
      0 => 'article',
      1 => 'page',
      2 => 'video',
    ),
    'flag_short' => 'Like?',
    'flag_long' => 'Like',
    'flag_message' => '',
    'unflag_short' => 'Liked!',
    'unflag_long' => 'Dislike',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'flag_feature',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
