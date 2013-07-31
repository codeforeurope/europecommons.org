<?php
/**
 * @file
 * appcat_misc.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function appcat_misc_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer sharethis.
  $permissions['administer sharethis'] = array(
    'name' => 'administer sharethis',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'sharethis',
  );

  return $permissions;
}
