<?php
/**
 * @file
 * appcat_blog_node.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function appcat_blog_node_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Introduction',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8d887c04-6955-4e79-b0c6-3369cc0caf5e',
    'vocabulary_machine_name' => 'tags',
  );
  return $terms;
}
