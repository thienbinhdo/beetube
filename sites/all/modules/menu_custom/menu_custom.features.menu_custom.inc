<?php
/**
 * @file
 * menu_custom.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_custom_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-menu-nav.
  $menus['menu-menu-nav'] = array(
    'menu_name' => 'menu-menu-nav',
    'title' => 'Menu-nav',
    'description' => '',
  );
  // Exported menu: menu-second-menu-nav.
  $menus['menu-second-menu-nav'] = array(
    'menu_name' => 'menu-second-menu-nav',
    'title' => 'Second menu-nav',
    'description' => '',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Menu-nav');
  t('Second menu-nav');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');


  return $menus;
}
