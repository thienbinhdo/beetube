<?php

/**
 * @file
 * template.php
 */
/**
 * implement hook_css_alter()
 */
function beetube_theme_css_alter(&$css) {
  // Remove defaults.css file.
  $exclude = array(
	'sites/all/modules/jcarousel/skins/default/jcarousel-default.css' => FALSE,
  );
  $css = array_diff_key($css, $exclude);
}
/**
 * implement hook_css_alter()
 */
function beetube_theme_preprocess_html(&$variables){
	$css = 'body{background:#EEE url("http://beetube.me/wp-content/themes/beetube/images/bg-pattern.png") repeat center top fixed !important;}
.info-less{height:100px;}#main-nav {background:#444 !important;}#main-nav ul li ul{background:#444 !important}#top-nav {background: !important;}#header-search .search-text-div input[type="text"]{background: !important;}';
	drupal_add_css($css,'inline');
}
function beetube_theme_js_alter(&$javascript) {
  // Swap out jQuery to use an updated version of the library.
  $javascript['misc/jquery.js']['data'] = drupal_get_path('theme', 'beetube_theme') . '/js/jquery.js';
}

/*function beetube_theme_preprocess_page(&$vars, $hook) {
	// dpm($vars);
}*/
function beetube_theme_preprocess_page(&$vars, $hook) {
  $alias_parts = explode('/', drupal_get_path_alias());

  if (count($alias_parts) && $alias_parts[0] == 'category') {
    $vars['theme_hook_suggestions'][] = 'page__category';
  }
}
