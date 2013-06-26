<?php
/**
 * @file
 * ec_programmes.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ec_programmes_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'views-programmes-block' => array(
      'delta' => 'programmes-block',
      'module' => 'views',
    ),
  );

  // bartik
  $theme = array();

  $theme['views-programmes-block'] = array(
    'module' => 'views',
    'delta' => 'programmes-block',
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

  $theme['views-programmes-block'] = array(
    'module' => 'views',
    'delta' => 'programmes-block',
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
