<?php
/**
 * @file
 * ec_programmes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_programmes_user_default_permissions() {
  $permissions = array();

  // Exported permission: create programme content.
  $permissions['create programme content'] = array(
    'name' => 'create programme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any programme content.
  $permissions['delete any programme content'] = array(
    'name' => 'delete any programme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own programme content.
  $permissions['delete own programme content'] = array(
    'name' => 'delete own programme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any programme content.
  $permissions['edit any programme content'] = array(
    'name' => 'edit any programme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own programme content.
  $permissions['edit own programme content'] = array(
    'name' => 'edit own programme content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
