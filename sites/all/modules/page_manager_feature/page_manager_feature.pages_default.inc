<?php
/**
 * @file
 * page_manager_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function page_manager_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'top' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
    'style' => 'clean_element',
    'left' => array(
      'style' => 'default',
    ),
    'top' => array(
      'style' => 'default',
    ),
    'right' => array(
      'style' => 'default',
    ),
    'bottom' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '07c5e1ad-64b3-4568-9a38-8b5764bb1ce6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-39fb8e7a-1f7c-4182-8bf8-4b8bfde22f92';
    $pane->panel = 'bottom';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '39fb8e7a-1f7c-4182-8bf8-4b8bfde22f92';
    $display->content['new-39fb8e7a-1f7c-4182-8bf8-4b8bfde22f92'] = $pane;
    $display->panels['bottom'][0] = 'new-39fb8e7a-1f7c-4182-8bf8-4b8bfde22f92';
    $pane = new stdClass();
    $pane->pid = 'new-d3a609ec-3460-456e-9dc7-c2a3348c3018';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'newest_video';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
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
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'section-box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3a609ec-3460-456e-9dc7-c2a3348c3018';
    $display->content['new-d3a609ec-3460-456e-9dc7-c2a3348c3018'] = $pane;
    $display->panels['left'][0] = 'new-d3a609ec-3460-456e-9dc7-c2a3348c3018';
    $pane = new stdClass();
    $pane->pid = 'new-a9c28725-3990-4721-b0c9-147cca90a888';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'newest_video';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '9',
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
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'section-box',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a9c28725-3990-4721-b0c9-147cca90a888';
    $display->content['new-a9c28725-3990-4721-b0c9-147cca90a888'] = $pane;
    $display->panels['left'][1] = 'new-a9c28725-3990-4721-b0c9-147cca90a888';
    $pane = new stdClass();
    $pane->pid = 'new-d490f3b4-dbc7-49a7-a0d3-8f61fe94f366';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'newest_video';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '12',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'section-box',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd490f3b4-dbc7-49a7-a0d3-8f61fe94f366';
    $display->content['new-d490f3b4-dbc7-49a7-a0d3-8f61fe94f366'] = $pane;
    $display->panels['left'][2] = 'new-d490f3b4-dbc7-49a7-a0d3-8f61fe94f366';
    $pane = new stdClass();
    $pane->pid = 'new-7959025f-4b9c-4d5b-8268-4439f9205c2c';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'newest_video';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'section-box',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7959025f-4b9c-4d5b-8268-4439f9205c2c';
    $display->content['new-7959025f-4b9c-4d5b-8268-4439f9205c2c'] = $pane;
    $display->panels['left'][3] = 'new-7959025f-4b9c-4d5b-8268-4439f9205c2c';
    $pane = new stdClass();
    $pane->pid = 'new-ca2c4fd1-0ba1-47f0-af33-50a5fed28b46';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'newest_video';
    $pane->shown = FALSE;
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
      'display' => 'block_4',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'section-box',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ca2c4fd1-0ba1-47f0-af33-50a5fed28b46';
    $display->content['new-ca2c4fd1-0ba1-47f0-af33-50a5fed28b46'] = $pane;
    $display->panels['left'][4] = 'new-ca2c4fd1-0ba1-47f0-af33-50a5fed28b46';
    $pane = new stdClass();
    $pane->pid = 'new-19e70239-aa22-4601-a2a3-226b8dc8baf5';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'newest_video';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_6',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'widget widget-posts',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '19e70239-aa22-4601-a2a3-226b8dc8baf5';
    $display->content['new-19e70239-aa22-4601-a2a3-226b8dc8baf5'] = $pane;
    $display->panels['right'][0] = 'new-19e70239-aa22-4601-a2a3-226b8dc8baf5';
    $pane = new stdClass();
    $pane->pid = 'new-40455ddc-dc2a-4ae7-9875-fa02d78a4bea';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'newest_video';
    $pane->shown = FALSE;
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
      'display' => 'block_5',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'widget widget-posts',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '40455ddc-dc2a-4ae7-9875-fa02d78a4bea';
    $display->content['new-40455ddc-dc2a-4ae7-9875-fa02d78a4bea'] = $pane;
    $display->panels['right'][1] = 'new-40455ddc-dc2a-4ae7-9875-fa02d78a4bea';
    $pane = new stdClass();
    $pane->pid = 'new-eabf14ca-61d8-43fc-91a8-cf97ba3d6434';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'tags';
    $pane->shown = FALSE;
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
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'tag_cloud-3',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'eabf14ca-61d8-43fc-91a8-cf97ba3d6434';
    $display->content['new-eabf14ca-61d8-43fc-91a8-cf97ba3d6434'] = $pane;
    $display->panels['right'][2] = 'new-eabf14ca-61d8-43fc-91a8-cf97ba3d6434';
    $pane = new stdClass();
    $pane->pid = 'new-7ba3dd20-df3f-4916-b023-386d9c986e26';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-5';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'text-5',
      'css_class' => 'widget widget_tag_cloud',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7ba3dd20-df3f-4916-b023-386d9c986e26';
    $display->content['new-7ba3dd20-df3f-4916-b023-386d9c986e26'] = $pane;
    $display->panels['right'][3] = 'new-7ba3dd20-df3f-4916-b023-386d9c986e26';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
