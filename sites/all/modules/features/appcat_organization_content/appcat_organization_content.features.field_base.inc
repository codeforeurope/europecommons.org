<?php
/**
 * @file
 * appcat_organization_content.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function appcat_organization_content_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_twitter'
  $field_bases['field_twitter'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_twitter',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'twitter_username',
    'settings' => array(
      'max_length' => 16,
    ),
    'translatable' => 0,
    'type' => 'twitter_username',
  );

  return $field_bases;
}
