<?php
/**
 * @file
 * appcat_misc_menus.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function appcat_misc_menus_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'menu-menu-signin-register-menu' => array(
      'delta' => 'menu-signin-register-menu',
      'module' => 'menu',
    ),
    'menu_block-1' => array(
      'delta' => 1,
      'module' => 'menu_block',
    ),
  );

  // bartik
  $theme = array();

  $theme['menu-menu-signin-register-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-signin-register-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => 1,
    'theme' => 'bartik',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['bartik'] = $theme;

  // europe_commons
  $theme = array();

  $theme['menu-menu-signin-register-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-signin-register-menu',
    'theme' => 'europe_commons',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => 1,
    'theme' => 'europe_commons',
    'status' => 0,
    'weight' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['europe_commons'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
