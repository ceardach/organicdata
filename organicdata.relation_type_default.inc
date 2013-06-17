<?php
/**
 * @file
 * organicdata.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function organicdata_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'contains_information_about';
  $relation_type->label = 'contains information about';
  $relation_type->reverse_label = 'has information at';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:organicdata_article',
    1 => 'node:organicdata_event',
    2 => 'node:organicdata_file',
    3 => 'node:organicdata_link',
    4 => 'node:organicdata_location',
    5 => 'node:organicdata_note',
    6 => 'node:organicdata_project',
  );
  $relation_type->target_bundles = array(
    0 => 'node:organicdata_article',
    1 => 'node:organicdata_event',
    2 => 'node:organicdata_file',
    3 => 'node:organicdata_group',
    4 => 'node:organicdata_individual',
    5 => 'node:organicdata_link',
    6 => 'node:organicdata_location',
    7 => 'node:organicdata_project',
  );
  $export['contains_information_about'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'contains_photo_of';
  $relation_type->label = 'contains photo of';
  $relation_type->reverse_label = 'is photographed by';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:organicdata_file',
  );
  $relation_type->target_bundles = array(
    0 => 'node:organicdata_event',
    1 => 'node:organicdata_group',
    2 => 'node:organicdata_individual',
    3 => 'node:organicdata_location',
    4 => 'node:organicdata_project',
  );
  $export['contains_photo_of'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'is_located_at';
  $relation_type->label = 'is located at';
  $relation_type->reverse_label = 'is location of';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:organicdata_event',
    1 => 'node:organicdata_group',
    2 => 'node:organicdata_individual',
    3 => 'node:organicdata_location',
    4 => 'node:organicdata_project',
  );
  $relation_type->target_bundles = array(
    0 => 'node:organicdata_location',
  );
  $export['is_located_at'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'is_owned_by';
  $relation_type->label = 'is owned by';
  $relation_type->reverse_label = 'owns';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:organicdata_article',
    1 => 'node:organicdata_event',
    2 => 'node:organicdata_file',
    3 => 'node:organicdata_group',
    4 => 'node:organicdata_link',
    5 => 'node:organicdata_location',
    6 => 'node:organicdata_project',
  );
  $relation_type->target_bundles = array(
    0 => 'node:organicdata_group',
    1 => 'node:organicdata_individual',
  );
  $export['is_owned_by'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'is_related_to';
  $relation_type->label = 'is related to';
  $relation_type->reverse_label = 'is related to';
  $relation_type->directional = 0;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:organicdata_article',
    1 => 'node:organicdata_event',
    2 => 'node:organicdata_file',
    3 => 'node:organicdata_group',
    4 => 'node:organicdata_individual',
    5 => 'node:organicdata_link',
    6 => 'node:organicdata_location',
    7 => 'node:organicdata_note',
    8 => 'node:organicdata_project',
  );
  $relation_type->target_bundles = array();
  $export['is_related_to'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'is_worked_on';
  $relation_type->label = 'is worked on';
  $relation_type->reverse_label = 'worked on';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:organicdata_article',
    1 => 'node:organicdata_event',
    2 => 'node:organicdata_file',
    3 => 'node:organicdata_group',
    4 => 'node:organicdata_link',
    5 => 'node:organicdata_location',
    6 => 'node:organicdata_project',
  );
  $relation_type->target_bundles = array(
    0 => 'node:organicdata_group',
    1 => 'node:organicdata_individual',
  );
  $export['is_worked_on'] = $relation_type;

  return $export;
}
