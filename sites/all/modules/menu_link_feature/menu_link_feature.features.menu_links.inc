<?php
/**
 * @file
 * menu_link_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_link_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-beetube:<front>
  $menu_links['main-menu_about-beetube:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'About Beetube',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_about-beetube:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_animals:<front>
  $menu_links['main-menu_animals:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Animals',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_animals:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_animation:<front>
  $menu_links['main-menu_animation:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Animation',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_animation:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_buy-now:<front>
  $menu_links['main-menu_buy-now:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Buy Now',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_buy-now:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact-us:<front>
  $menu_links['main-menu_contact-us:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contact us',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_contact-us:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_hd:<front>
  $menu_links['main-menu_hd:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'HD',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_hd:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_nature:<front>
  $menu_links['main-menu_nature:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Nature',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_nature:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_news:<front>
  $menu_links['main-menu_news:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_news:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: main-menu_random:<front>
  $menu_links['main-menu_random:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Random',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_random:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: main-menu_self-hosted:<front>
  $menu_links['main-menu_self-hosted:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Self Hosted',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_self-hosted:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
  );
  // Exported menu link: main-menu_slide-page:<front>
  $menu_links['main-menu_slide-page:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Slide Page',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_slide-page:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
  );
  // Exported menu link: main-menu_slow-motion:<front>
  $menu_links['main-menu_slow-motion:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Slow Motion',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_slow-motion:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sport:<front>
  $menu_links['main-menu_sport:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Sport',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_sport:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_submit-video:<front>
  $menu_links['main-menu_submit-video:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Submit Video',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_submit-video:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-nav_animals:category/animals
  $menu_links['menu-menu-nav_animals:category/animals'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => 'category/animals',
    'router_path' => 'category/animals',
    'link_title' => 'Animals',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_animals:category/animals',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-nav_animation:category/animation
  $menu_links['menu-menu-nav_animation:category/animation'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => 'category/animation',
    'router_path' => 'category/animation',
    'link_title' => 'Animation',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_animation:category/animation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-nav_buy-now:<front>
  $menu_links['menu-menu-nav_buy-now:<front>'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Buy Now',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_buy-now:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -32,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-nav_fullwidth-homepage:<front>
  $menu_links['menu-menu-nav_fullwidth-homepage:<front>'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Fullwidth Homepage',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_fullwidth-homepage:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-nav_home:<front>',
  );
  // Exported menu link: menu-menu-nav_hd:category/HD
  $menu_links['menu-menu-nav_hd:category/HD'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => 'category/HD',
    'router_path' => 'category/HD',
    'link_title' => 'HD',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_hd:category/HD',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-nav_home-page-v1:<front>
  $menu_links['menu-menu-nav_home-page-v1:<front>'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home Page v1',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_home-page-v1:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-nav_home:<front>',
  );
  // Exported menu link: menu-menu-nav_home-page-v2:<front>
  $menu_links['menu-menu-nav_home-page-v2:<front>'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home Page v2',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_home-page-v2:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-nav_home:<front>',
  );
  // Exported menu link: menu-menu-nav_home-page-v3:<front>
  $menu_links['menu-menu-nav_home-page-v3:<front>'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home Page v3',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_home-page-v3:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-nav_home:<front>',
  );
  // Exported menu link: menu-menu-nav_home:<front>
  $menu_links['menu-menu-nav_home:<front>'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-nav_nature:category/nature
  $menu_links['menu-menu-nav_nature:category/nature'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => 'category/nature',
    'router_path' => 'category/nature',
    'link_title' => 'Nature',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_nature:category/nature',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-nav_news:category/news
  $menu_links['menu-menu-nav_news:category/news'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => 'category/news',
    'router_path' => 'category/news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_news:category/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-nav_random:category/random
  $menu_links['menu-menu-nav_random:category/random'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => 'category/random',
    'router_path' => 'category/random',
    'link_title' => 'Random',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_random:category/random',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-nav_self-hosted:node/28
  $menu_links['menu-menu-nav_self-hosted:node/28'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Self Hosted',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_self-hosted:node/28',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -33,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-nav_single-video-v2:<front>
  $menu_links['menu-menu-nav_single-video-v2:<front>'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Single Video v2',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_single-video-v2:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-nav_home:<front>',
  );
  // Exported menu link: menu-menu-nav_slide-page:<front>
  $menu_links['menu-menu-nav_slide-page:<front>'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Slide Page',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_slide-page:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-nav_slow-motion:category/slow-motion
  $menu_links['menu-menu-nav_slow-motion:category/slow-motion'] = array(
    'menu_name' => 'menu-menu-nav',
    'link_path' => 'category/slow-motion',
    'router_path' => 'category/slow-motion',
    'link_title' => 'Slow Motion',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-nav_slow-motion:category/slow-motion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-second-menu-nav_animals:category/animals
  $menu_links['menu-second-menu-nav_animals:category/animals'] = array(
    'menu_name' => 'menu-second-menu-nav',
    'link_path' => 'category/animals',
    'router_path' => 'category/animals',
    'link_title' => 'Animals',
    'options' => array(
      'identifier' => 'menu-second-menu-nav_animals:category/animals',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-second-menu-nav_animation:category/animation
  $menu_links['menu-second-menu-nav_animation:category/animation'] = array(
    'menu_name' => 'menu-second-menu-nav',
    'link_path' => 'category/animation',
    'router_path' => 'category/animation',
    'link_title' => 'Animation',
    'options' => array(
      'identifier' => 'menu-second-menu-nav_animation:category/animation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-second-menu-nav_cartoons:category/cartoons
  $menu_links['menu-second-menu-nav_cartoons:category/cartoons'] = array(
    'menu_name' => 'menu-second-menu-nav',
    'link_path' => 'category/cartoons',
    'router_path' => 'category/cartoons',
    'link_title' => 'Cartoons',
    'options' => array(
      'identifier' => 'menu-second-menu-nav_cartoons:category/cartoons',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-second-menu-nav_hd:category/hd
  $menu_links['menu-second-menu-nav_hd:category/hd'] = array(
    'menu_name' => 'menu-second-menu-nav',
    'link_path' => 'category/hd',
    'router_path' => 'category/hd',
    'link_title' => 'HD',
    'options' => array(
      'identifier' => 'menu-second-menu-nav_hd:category/hd',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-second-menu-nav_kids:category/kids
  $menu_links['menu-second-menu-nav_kids:category/kids'] = array(
    'menu_name' => 'menu-second-menu-nav',
    'link_path' => 'category/kids',
    'router_path' => 'category/kids',
    'link_title' => 'Kids',
    'options' => array(
      'identifier' => 'menu-second-menu-nav_kids:category/kids',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-second-menu-nav_nature:category/nature
  $menu_links['menu-second-menu-nav_nature:category/nature'] = array(
    'menu_name' => 'menu-second-menu-nav',
    'link_path' => 'category/nature',
    'router_path' => 'category/nature',
    'link_title' => 'Nature',
    'options' => array(
      'identifier' => 'menu-second-menu-nav_nature:category/nature',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-second-menu-nav_news:category/news
  $menu_links['menu-second-menu-nav_news:category/news'] = array(
    'menu_name' => 'menu-second-menu-nav',
    'link_path' => 'category/news',
    'router_path' => 'category/news',
    'link_title' => 'News',
    'options' => array(
      'identifier' => 'menu-second-menu-nav_news:category/news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-second-menu-nav_random:category/random
  $menu_links['menu-second-menu-nav_random:category/random'] = array(
    'menu_name' => 'menu-second-menu-nav',
    'link_path' => 'category/random',
    'router_path' => 'category/random',
    'link_title' => 'Random',
    'options' => array(
      'identifier' => 'menu-second-menu-nav_random:category/random',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-second-menu-nav_slow-motion:category/slow-motion
  $menu_links['menu-second-menu-nav_slow-motion:category/slow-motion'] = array(
    'menu_name' => 'menu-second-menu-nav',
    'link_path' => 'category/slow-motion',
    'router_path' => 'category/slow-motion',
    'link_title' => 'Slow motion',
    'options' => array(
      'identifier' => 'menu-second-menu-nav_slow-motion:category/slow-motion',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-second-menu-nav_sport:category/sports
  $menu_links['menu-second-menu-nav_sport:category/sports'] = array(
    'menu_name' => 'menu-second-menu-nav',
    'link_path' => 'category/sports',
    'router_path' => 'category/sports',
    'link_title' => 'Sport',
    'options' => array(
      'identifier' => 'menu-second-menu-nav_sport:category/sports',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-second-menu-nav_uncategoried:category/uncategoried
  $menu_links['menu-second-menu-nav_uncategoried:category/uncategoried'] = array(
    'menu_name' => 'menu-second-menu-nav',
    'link_path' => 'category/uncategoried',
    'router_path' => 'category/uncategoried',
    'link_title' => 'Uncategoried',
    'options' => array(
      'identifier' => 'menu-second-menu-nav_uncategoried:category/uncategoried',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_chaos-tools-ajax-demo:ctools_ajax_sample
  $menu_links['navigation_chaos-tools-ajax-demo:ctools_ajax_sample'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'ctools_ajax_sample',
    'router_path' => 'ctools_ajax_sample',
    'link_title' => 'Chaos Tools AJAX Demo',
    'options' => array(
      'identifier' => 'navigation_chaos-tools-ajax-demo:ctools_ajax_sample',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_compose-tips:filter/tips
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_successful-jumping:ctools_ajax_sample/jumped
  $menu_links['navigation_successful-jumping:ctools_ajax_sample/jumped'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'ctools_ajax_sample/jumped',
    'router_path' => 'ctools_ajax_sample/jumped',
    'link_title' => 'Successful Jumping',
    'options' => array(
      'identifier' => 'navigation_successful-jumping:ctools_ajax_sample/jumped',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_chaos-tools-ajax-demo:ctools_ajax_sample',
  );
  // Exported menu link: user-menu_are-you-new:<front>
  $menu_links['user-menu_are-you-new:<front>'] = array(
    'menu_name' => 'user-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Are You New?',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'acti1',
        ),
      ),
      'identifier' => 'user-menu_are-you-new:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_login:http://192.168.1.39/beetube/user
  $menu_links['user-menu_login:http://192.168.1.39/beetube/user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'http://192.168.1.39/beetube/user',
    'router_path' => '',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'user-menu_login:http://192.168.1.39/beetube/user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: user-menu_register:http://192.168.1.39/beetube/user/register
  $menu_links['user-menu_register:http://192.168.1.39/beetube/user/register'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'http://192.168.1.39/beetube/user/register',
    'router_path' => '',
    'link_title' => 'Register',
    'options' => array(
      'attributes' => array(
        'title' => 'Register',
        'class' => array(
          0 => 'user-regis',
        ),
      ),
      'identifier' => 'user-menu_register:http://192.168.1.39/beetube/user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_search:<front>
  $menu_links['user-menu_search:<front>'] = array(
    'menu_name' => 'user-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'search',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'user-menu_search:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Beetube');
  t('Animals');
  t('Animation');
  t('Are You New?');
  t('Buy Now');
  t('Cartoons');
  t('Chaos Tools AJAX Demo');
  t('Compose tips');
  t('Contact us');
  t('Fullwidth Homepage');
  t('HD');
  t('Home');
  t('Home Page v1');
  t('Home Page v2');
  t('Home Page v3');
  t('Kids');
  t('Login');
  t('Nature');
  t('News');
  t('Random');
  t('Register');
  t('Self Hosted');
  t('Single Video v2');
  t('Slide Page');
  t('Slow Motion');
  t('Slow motion');
  t('Sport');
  t('Submit Video');
  t('Successful Jumping');
  t('Uncategoried');
  t('User account');
  t('search');


  return $menu_links;
}
