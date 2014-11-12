<?php
/**
 * @file
 * panel_mini_feature.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function panel_mini_feature_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a865b873-793b-4dfa-8856-a48b883a3729';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-74c1d9ff-5d98-4471-af01-835ea28e2342';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '29',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'text-2',
      'css_class' => 'widget widget_text',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '74c1d9ff-5d98-4471-af01-835ea28e2342';
    $display->content['new-74c1d9ff-5d98-4471-af01-835ea28e2342'] = $pane;
    $display->panels['middle'][0] = 'new-74c1d9ff-5d98-4471-af01-835ea28e2342';
    $pane = new stdClass();
    $pane->pid = 'new-cd10a5da-9668-458b-a85a-6b6542689b2e';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'shortcut_views_footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => 'Views',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'views-3',
      'css_class' => 'widget widget_views',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cd10a5da-9668-458b-a85a-6b6542689b2e';
    $display->content['new-cd10a5da-9668-458b-a85a-6b6542689b2e'] = $pane;
    $display->panels['middle'][1] = 'new-cd10a5da-9668-458b-a85a-6b6542689b2e';
    $pane = new stdClass();
    $pane->pid = 'new-ef1db19c-cadb-410c-b7b4-79114e7ffd45';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'shortcut_views_footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '2',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => 'Recent post',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'jtheme-widget-posts-3',
      'css_class' => 'widget widget-posts',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ef1db19c-cadb-410c-b7b4-79114e7ffd45';
    $display->content['new-ef1db19c-cadb-410c-b7b4-79114e7ffd45'] = $pane;
    $display->panels['middle'][2] = 'new-ef1db19c-cadb-410c-b7b4-79114e7ffd45';
    $pane = new stdClass();
    $pane->pid = 'new-5b0bc2be-ef26-4293-b3cf-4066d958f2f9';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'slieshow_footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'widget widget-tweets',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5b0bc2be-ef26-4293-b3cf-4066d958f2f9';
    $display->content['new-5b0bc2be-ef26-4293-b3cf-4066d958f2f9'] = $pane;
    $display->panels['middle'][3] = 'new-5b0bc2be-ef26-4293-b3cf-4066d958f2f9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-74c1d9ff-5d98-4471-af01-835ea28e2342';
  $mini->display = $display;
  $export['footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'video_item';
  $mini->category = '';
  $mini->admin_title = 'video item';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4ac8c88f-5eca-4c06-b75d-cb547694cdfd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2e2ec430-0b4f-4f15-92b6-908d61dda721';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'video_item';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2e2ec430-0b4f-4f15-92b6-908d61dda721';
    $display->content['new-2e2ec430-0b4f-4f15-92b6-908d61dda721'] = $pane;
    $display->panels['center'][0] = 'new-2e2ec430-0b4f-4f15-92b6-908d61dda721';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2e2ec430-0b4f-4f15-92b6-908d61dda721';
  $mini->display = $display;
  $export['video_item'] = $mini;

  return $export;
}
