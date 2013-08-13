<?php
/**
 * @file
 * appcat_organization_content.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function appcat_organization_content_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-organization-field_twitter'
  $field_instances['node-organization-field_twitter'] = array(
    'bundle' => 'organization',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Twitter account of the web team or organisation.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'twitter_username',
        'settings' => array(),
        'type' => 'twitter_username_default',
        'weight' => 14,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_twitter',
    'label' => 'Twitter',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
      'validate_existance' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'twitter_username',
      'settings' => array(
        'label_help_description' => '',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'twitter_username',
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('The Twitter account of the web team or organisation.');
  t('Twitter');

  return $field_instances;
}
