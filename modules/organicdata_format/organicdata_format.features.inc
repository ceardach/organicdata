<?php
/**
 * @file
 * organicdata_format.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function organicdata_format_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
