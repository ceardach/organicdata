<?php
/**
 * @file
 * organicdata_format.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function organicdata_format_user_default_permissions() {
  $permissions = array();

  // Exported permission: use text format markdown.
  $permissions['use text format markdown'] = array(
    'name' => 'use text format markdown',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
