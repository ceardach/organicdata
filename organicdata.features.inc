<?php
/**
 * @file
 * organicdata.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function organicdata_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function organicdata_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function organicdata_node_info() {
  $items = array(
    'organicdata_article' => array(
      'name' => t('Organic Article'),
      'base' => 'node_content',
      'description' => t('In depth content detailing a topic, discovery or research.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Provide content that is in depth about a topic.  This type of content will likely be long and thoughtful.  Otherwise, create a <a href="node/add/note">note</a>'),
    ),
    'organicdata_event' => array(
      'name' => t('Organic Event'),
      'base' => 'node_content',
      'description' => t('Something that happened at a particular time.  Could be something planned, such as a convention or wedding, or something unplanned, such as a disaster or a puppy showing up at your doorstep.'),
      'has_title' => '1',
      'title_label' => t('What was it called?'),
      'help' => t('Describe what occured at this event and what made it particularly notable.'),
    ),
    'organicdata_file' => array(
      'name' => t('Organic File'),
      'base' => 'node_content',
      'description' => t('Content that is not text and does not have a 1:1 relationship with another entity.  Can be an image, which will be displayed, or a file of any other type, such as PDFs, zips, etc.'),
      'has_title' => '1',
      'title_label' => t('Brief description'),
      'help' => t('Provide a file.'),
    ),
    'organicdata_group' => array(
      'name' => t('Organic Group'),
      'base' => 'node_content',
      'description' => t('Information about a particular group of individuals, whether they be humans or non-human beings.  Can be companies, families, stereotypes, or breeds of cats and dogs.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('Just the facts, ma\'am. The rest will be drawn from its associations with other entities.'),
    ),
    'organicdata_individual' => array(
      'name' => t('Organic Individual'),
      'base' => 'node_content',
      'description' => t('Information about a particular individual, whether it be a human or non-human being.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('Just the facts, ma\'am. The rest will be drawn from its associations with other entities.'),
    ),
    'organicdata_link' => array(
      'name' => t('Organic Link'),
      'base' => 'node_content',
      'description' => t('Reference to an external internet source.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Provide an address.'),
    ),
    'organicdata_location' => array(
      'name' => t('Organic Location'),
      'base' => 'node_content',
      'description' => t('Description of a particular location that has relevance.'),
      'has_title' => '1',
      'title_label' => t('Description'),
      'help' => t('Provide a location.'),
    ),
    'organicdata_note' => array(
      'name' => t('Organic Note'),
      'base' => 'node_content',
      'description' => t('Brief discussion on a topic.  The primary goal is to get the information recorded, not to be polished.'),
      'has_title' => '1',
      'title_label' => t('Description'),
      'help' => t('Provide at least the minimum amount of information needed to express the topic.  Remember: the primary goal is to get the information recorded, not to have it be polished and perfect!'),
    ),
    'organicdata_project' => array(
      'name' => t('Organic Project'),
      'base' => 'node_content',
      'description' => t('Description of a particular project or undertaking.'),
      'has_title' => '1',
      'title_label' => t('Title or description'),
      'help' => t('Just the facts, ma\'am. The rest will be drawn from its associations with other entities.'),
    ),
  );
  return $items;
}
