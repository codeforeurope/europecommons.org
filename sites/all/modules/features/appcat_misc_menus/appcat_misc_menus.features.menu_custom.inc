<?php
/**
 * @file
 * appcat_misc_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function appcat_misc_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-actions.
  $menus['menu-actions'] = array(
    'menu_name' => 'menu-actions',
    'title' => 'Actions',
    'description' => '',
  );
  // Exported menu: menu-menu-bar.
  $menus['menu-menu-bar'] = array(
    'menu_name' => 'menu-menu-bar',
    'title' => 'Top menu',
    'description' => '',
  );
  // Exported menu: menu-signin-register-menu.
  $menus['menu-signin-register-menu'] = array(
    'menu_name' => 'menu-signin-register-menu',
    'title' => 'Signin/register menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Actions');
  t('Main menu');
  t('Signin/register menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Top menu');


  return $menus;
}
