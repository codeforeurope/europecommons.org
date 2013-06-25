<?php
/**
 * @file
 * appcat_home_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function appcat_home_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'Home page of the OpenCivic website';
  $context->tag = 'AppCat homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-call_to_action' => array(
          'module' => 'panels_mini',
          'delta' => 'call_to_action',
          'region' => 'content',
          'weight' => '-10',
        ),
        'panels_mini-what_s_happening' => array(
          'module' => 'panels_mini',
          'delta' => 'what_s_happening',
          'region' => 'three_33_top',
          'weight' => '-9',
        ),
        'panels_mini-blog' => array(
          'module' => 'panels_mini',
          'delta' => 'blog',
          'region' => 'three_33_bottom',
          'weight' => '-10',
        ),
        'views-home_page_map-block_1' => array(
          'module' => 'views',
          'delta' => 'home_page_map-block_1',
          'region' => 'three_33_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AppCat homepage');
  t('Home page of the OpenCivic website');
  $export['homepage'] = $context;

  return $export;
}
