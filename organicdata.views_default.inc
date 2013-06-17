<?php
/**
 * @file
 * organicdata.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function organicdata_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'organicdata_recent';
  $view->description = 'Recent OrganicData content';
  $view->tag = 'OrganicData';
  $view->base_table = 'node';
  $view->human_name = 'Recent OrganicData';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent content';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Promoted to front page */
  $handler->display->display_options['sorts']['promote']['id'] = 'promote';
  $handler->display->display_options['sorts']['promote']['table'] = 'node';
  $handler->display->display_options['sorts']['promote']['field'] = 'promote';
  $handler->display->display_options['sorts']['promote']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organicdata_article' => 'organicdata_article',
    'organicdata_event' => 'organicdata_event',
    'organicdata_file' => 'organicdata_file',
    'organicdata_group' => 'organicdata_group',
    'organicdata_individual' => 'organicdata_individual',
    'organicdata_link' => 'organicdata_link',
    'organicdata_location' => 'organicdata_location',
    'organicdata_note' => 'organicdata_note',
    'organicdata_project' => 'organicdata_project',
  );

  /* Display: Recent Block */
  $handler = $view->new_display('block', 'Recent Block', 'block_recent');

  /* Display: Recent Page */
  $handler = $view->new_display('page', 'Recent Page', 'page_recent');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '3';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'recent/organicdata';

  /* Display: Articles Block */
  $handler = $view->new_display('block', 'Articles Block', 'block_articles');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent articles';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_articles';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organicdata_article' => 'organicdata_article',
  );

  /* Display: Articles Page */
  $handler = $view->new_display('page', 'Articles Page', 'page_articles');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent articles';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '3';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organicdata_article' => 'organicdata_article',
  );
  $handler->display->display_options['path'] = 'recent/organicdata-articles';

  /* Display: Other Block */
  $handler = $view->new_display('block', 'Other Block', 'block_other');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent data';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'organicdata-collection';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organicdata_event' => 'organicdata_event',
    'organicdata_file' => 'organicdata_file',
    'organicdata_group' => 'organicdata_group',
    'organicdata_individual' => 'organicdata_individual',
    'organicdata_link' => 'organicdata_link',
    'organicdata_location' => 'organicdata_location',
    'organicdata_note' => 'organicdata_note',
    'organicdata_project' => 'organicdata_project',
  );

  /* Display: Other Page */
  $handler = $view->new_display('page', 'Other Page', 'page_other');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent data';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'organicdata-collection';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '10';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organicdata_event' => 'organicdata_event',
    'organicdata_file' => 'organicdata_file',
    'organicdata_group' => 'organicdata_group',
    'organicdata_individual' => 'organicdata_individual',
    'organicdata_link' => 'organicdata_link',
    'organicdata_location' => 'organicdata_location',
    'organicdata_note' => 'organicdata_note',
    'organicdata_project' => 'organicdata_project',
  );
  $handler->display->display_options['path'] = 'recent/organicdata-collection';
  $export['organicdata_recent'] = $view;

  $view = new view();
  $view->name = 'related';
  $view->description = 'Relationships between various organic data.';
  $view->tag = 'OrganicData';
  $view->base_table = 'node';
  $view->human_name = 'Related OrganicData';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Relation: is related to (node ↔ node) */
  $handler->display->display_options['relationships']['relation_is_related_to_node']['id'] = 'relation_is_related_to_node';
  $handler->display->display_options['relationships']['relation_is_related_to_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_is_related_to_node']['field'] = 'relation_is_related_to_node';
  $handler->display->display_options['relationships']['relation_is_related_to_node']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_is_related_to_node']['entity_deduplication_right'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_is_related_to_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organicdata_article' => 'organicdata_article',
    'organicdata_event' => 'organicdata_event',
    'organicdata_file' => 'organicdata_file',
    'organicdata_group' => 'organicdata_group',
    'organicdata_individual' => 'organicdata_individual',
    'organicdata_link' => 'organicdata_link',
    'organicdata_location' => 'organicdata_location',
    'organicdata_note' => 'organicdata_note',
    'organicdata_project' => 'organicdata_project',
  );

  /* Display: Related */
  $handler = $view->new_display('block', 'Related', 'block_owns');
  $handler->display->display_options['display_description'] = 'Master related content template';

  /* Display: Authored */
  $handler = $view->new_display('block', 'Authored', 'block_authored');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Authored';
  $handler->display->display_options['display_description'] = 'Authored articles';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: is owned by (node → node) */
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['id'] = 'relation_is_owned_by_node';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['field'] = 'relation_is_owned_by_node';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['entity_deduplication_right'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_is_owned_by_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organicdata_article' => 'organicdata_article',
  );

  /* Display: Contributed */
  $handler = $view->new_display('block', 'Contributed', 'block_contributed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contributions';
  $handler->display->display_options['display_description'] = 'Things that have been contributed to';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: is worked on (node → node) */
  $handler->display->display_options['relationships']['relation_is_worked_on_node']['id'] = 'relation_is_worked_on_node';
  $handler->display->display_options['relationships']['relation_is_worked_on_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_is_worked_on_node']['field'] = 'relation_is_worked_on_node';
  $handler->display->display_options['relationships']['relation_is_worked_on_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_is_worked_on_node']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_is_worked_on_node']['entity_deduplication_right'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_is_worked_on_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'all' => 'all',
    'organicdata_article' => 'organicdata_article',
    'organicdata_event' => 'organicdata_event',
    'organicdata_file' => 'organicdata_file',
    'organicdata_group' => 'organicdata_group',
    'organicdata_individual' => 'organicdata_individual',
    'organicdata_link' => 'organicdata_link',
    'organicdata_location' => 'organicdata_location',
    'organicdata_note' => 'organicdata_note',
    'organicdata_project' => 'organicdata_project',
  );

  /* Display: Contributors */
  $handler = $view->new_display('block', 'Contributors', 'block_contributors');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contributors';
  $handler->display->display_options['display_description'] = 'Those that have been contributors';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: is worked on (node → node) */
  $handler->display->display_options['relationships']['relation_is_worked_on_node']['id'] = 'relation_is_worked_on_node';
  $handler->display->display_options['relationships']['relation_is_worked_on_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_is_worked_on_node']['field'] = 'relation_is_worked_on_node';
  $handler->display->display_options['relationships']['relation_is_worked_on_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_is_worked_on_node']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_is_worked_on_node']['entity_deduplication_right'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_is_worked_on_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'all' => 'all',
    'organicdata_article' => 'organicdata_article',
    'organicdata_event' => 'organicdata_event',
    'organicdata_file' => 'organicdata_file',
    'organicdata_group' => 'organicdata_group',
    'organicdata_individual' => 'organicdata_individual',
    'organicdata_link' => 'organicdata_link',
    'organicdata_location' => 'organicdata_location',
    'organicdata_note' => 'organicdata_note',
    'organicdata_project' => 'organicdata_project',
  );

  /* Display: Author */
  $handler = $view->new_display('block', 'Author', 'block_author');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Author';
  $handler->display->display_options['display_description'] = 'Those who authored';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: is owned by (node → node) */
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['id'] = 'relation_is_owned_by_node';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['field'] = 'relation_is_owned_by_node';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['entity_deduplication_right'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_is_owned_by_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'organicdata_article' => 'organicdata_article',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organicdata_group' => 'organicdata_group',
    'organicdata_individual' => 'organicdata_individual',
  );

  /* Display: Owner */
  $handler = $view->new_display('block', 'Owner', 'block_owner');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Owner';
  $handler->display->display_options['display_description'] = 'Owner of';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: is owned by (node → node) */
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['id'] = 'relation_is_owned_by_node';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['field'] = 'relation_is_owned_by_node';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['entity_deduplication_right'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_is_owned_by_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'organicdata_file' => 'organicdata_file',
    'organicdata_group' => 'organicdata_group',
    'organicdata_individual' => 'organicdata_individual',
    'organicdata_link' => 'organicdata_link',
    'organicdata_location' => 'organicdata_location',
    'organicdata_note' => 'organicdata_note',
    'organicdata_project' => 'organicdata_project',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organicdata_file' => 'organicdata_file',
    'organicdata_group' => 'organicdata_group',
    'organicdata_individual' => 'organicdata_individual',
    'organicdata_link' => 'organicdata_link',
    'organicdata_location' => 'organicdata_location',
    'organicdata_note' => 'organicdata_note',
    'organicdata_project' => 'organicdata_project',
  );

  /* Display: Information about */
  $handler = $view->new_display('block', 'Information about', 'block_infoabout');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Information about';
  $handler->display->display_options['display_description'] = 'Contains information about';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: contains information about (node → node) */
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['id'] = 'relation_contains_information_about_node';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['field'] = 'relation_contains_information_about_node';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['entity_deduplication_right'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_contains_information_about_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organicdata_article' => 'organicdata_article',
    'organicdata_event' => 'organicdata_event',
    'organicdata_group' => 'organicdata_group',
    'organicdata_individual' => 'organicdata_individual',
    'organicdata_link' => 'organicdata_link',
    'organicdata_location' => 'organicdata_location',
    'organicdata_project' => 'organicdata_project',
  );

  /* Display: More information */
  $handler = $view->new_display('block', 'More information', 'block_moreinfo');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'More information';
  $handler->display->display_options['display_description'] = 'Where more information can be found';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: contains information about (node → node) */
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['id'] = 'relation_contains_information_about_node';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['field'] = 'relation_contains_information_about_node';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['entity_deduplication_right'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_contains_information_about_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organicdata_article' => 'organicdata_article',
    'organicdata_event' => 'organicdata_event',
    'organicdata_location' => 'organicdata_location',
    'organicdata_note' => 'organicdata_note',
    'organicdata_project' => 'organicdata_project',
  );

  /* Display: Links */
  $handler = $view->new_display('block', 'Links', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'On the web';
  $handler->display->display_options['display_description'] = 'Information on the web';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: contains information about (node → node) */
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['id'] = 'relation_contains_information_about_node';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['field'] = 'relation_contains_information_about_node';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['entity_deduplication_right'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_contains_information_about_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organicdata_link' => 'organicdata_link',
  );

  /* Display: Organizers */
  $handler = $view->new_display('block', 'Organizers', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Organizers';
  $handler->display->display_options['display_description'] = 'Organizers of an event';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: is owned by (node → node) */
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['id'] = 'relation_is_owned_by_node';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['field'] = 'relation_is_owned_by_node';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['entity_deduplication_right'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_is_owned_by_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'organicdata_event' => 'organicdata_event',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organicdata_event' => 'organicdata_event',
  );

  /* Display: Owns */
  $handler = $view->new_display('block', 'Owns', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Owns';
  $handler->display->display_options['display_description'] = 'Things that are owned of any type';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: is owned by (node → node) */
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['id'] = 'relation_is_owned_by_node';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['field'] = 'relation_is_owned_by_node';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_is_owned_by_node']['entity_deduplication_right'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_is_owned_by_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organicdata_file' => 'organicdata_file',
    'organicdata_group' => 'organicdata_group',
    'organicdata_individual' => 'organicdata_individual',
    'organicdata_link' => 'organicdata_link',
    'organicdata_location' => 'organicdata_location',
    'organicdata_note' => 'organicdata_note',
    'organicdata_project' => 'organicdata_project',
  );

  /* Display: Files */
  $handler = $view->new_display('block', 'Files', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Files';
  $handler->display->display_options['display_description'] = 'Files about';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: contains information about (node → node) */
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['id'] = 'relation_contains_information_about_node';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['field'] = 'relation_contains_information_about_node';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_contains_information_about_node']['entity_deduplication_right'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_contains_information_about_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organicdata_file' => 'organicdata_file',
  );
  $export['related'] = $view;

  return $export;
}
