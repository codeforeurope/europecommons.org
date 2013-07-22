<?php
/**
 * @file
 * appcat_misc_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function appcat_misc_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-actions:node/add/application
  $menu_links['menu-actions:node/add/application'] = array(
    'menu_name' => 'menu-actions',
    'link_path' => 'node/add/application',
    'router_path' => 'node/add/application',
    'link_title' => '+App',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-actions:node/add/blog
  $menu_links['menu-actions:node/add/blog'] = array(
    'menu_name' => 'menu-actions',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => '+Story',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-actions:node/add/deployment
  $menu_links['menu-actions:node/add/deployment'] = array(
    'menu_name' => 'menu-actions',
    'link_path' => 'node/add/deployment',
    'router_path' => 'node/add/deployment',
    'link_title' => '+Deployment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-actions:node/add/organization
  $menu_links['menu-actions:node/add/organization'] = array(
    'menu_name' => 'menu-actions',
    'link_path' => 'node/add/organization',
    'router_path' => 'node/add/organization',
    'link_title' => '+Org',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-menu-bar:user
  $menu_links['menu-menu-bar:user'] = array(
    'menu_name' => 'menu-menu-bar',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-signin-register-menu:user
  $menu_links['menu-signin-register-menu:user'] = array(
    'menu_name' => 'menu-signin-register-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Sign in/register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('+App');
  t('+Deployment');
  t('+Org');
  t('+Story');
  t('Account');
  t('Home');
  t('Sign in/register');


  return $menu_links;
}
