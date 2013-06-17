<?php
/**
 * @file
 * organicdata_ui.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function organicdata_ui_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'organicdata_createcontent';
  $content->admin_title = 'OrganicData Create Links';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'OrganicData Create Links',
    'title' => '',
    'body' => '<p style="align:center;"><a href="node/add/organicdata-article?destination=organicdata-overview">add article</a> | <a href="node/add/organicdata-event?destination=organicdata-overview">add event</a> | <a href="node/add/organicdata-file?destination=organicdata-overview">add file</a> | <a href="node/add/organicdata-group?destination=organicdata-overview">add group</a> | <a href="node/add/organicdata-individual?destination=organicdata-overview">add individual</a> | <a href="node/add/organicdata-link?destination=organicdata-overview">add link</a> | <a href="node/add/organicdata-location?destination=organicdata-overview">add location</a> | <a href="node/add/organicdata-note?destination=organicdata-overview">add note</a> | <a href="node/add/organicdata-project?destination=organicdata-overview">add&nbsp;project</a></p>',
    'format' => 'markdown',
    'substitute' => TRUE,
  );
  $export['organicdata_createcontent'] = $content;

  return $export;
}
