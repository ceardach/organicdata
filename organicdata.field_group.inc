<?php
/**
 * @file
 * organicdata.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function organicdata_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_address|node|organicdata_individual|form';
  $field_group->group_name = 'group_organicdata_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_individual';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Address',
    'weight' => '5',
    'children' => array(
      0 => 'field_organicdata_located',
      1 => 'group_organicdata_locationadd',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_address|node|organicdata_individual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_contact|node|organicdata_group|form';
  $field_group->group_name = 'group_organicdata_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '1',
    'children' => array(
      0 => 'field_organicdata_phone',
      1 => 'field_organicdata_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_organicdata_contact|node|organicdata_group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_contact|node|organicdata_individual|form';
  $field_group->group_name = 'group_organicdata_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_individual';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '4',
    'children' => array(
      0 => 'group_organicdata_phone',
      1 => 'group_organicdata_email',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_organicdata_contact|node|organicdata_individual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_contributors|node|organicdata_article|form';
  $field_group->group_name = 'group_organicdata_contributors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Owner & Contributors',
    'weight' => '14',
    'children' => array(
      0 => 'field_organicdata_contributor',
      1 => 'field_organicdata_owner',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Owner & Contributors',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_organicdata_contributors|node|organicdata_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_contributors|node|organicdata_event|form';
  $field_group->group_name = 'group_organicdata_contributors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Organizer & Contributors',
    'weight' => '4',
    'children' => array(
      0 => 'field_organicdata_contributor',
      1 => 'field_organicdata_owner',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_contributors|node|organicdata_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_contributors|node|organicdata_file|form';
  $field_group->group_name = 'group_organicdata_contributors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_file';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Owner & Contributors',
    'weight' => '14',
    'children' => array(
      0 => 'field_organicdata_owner',
      1 => 'field_organicdata_contributor',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_contributors|node|organicdata_file|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_contributors|node|organicdata_group|form';
  $field_group->group_name = 'group_organicdata_contributors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Owner & Contributors',
    'weight' => '9',
    'children' => array(
      0 => 'field_organicdata_owner',
      1 => 'field_organicdata_contributor',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_contributors|node|organicdata_group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_contributors|node|organicdata_link|form';
  $field_group->group_name = 'group_organicdata_contributors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_link';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Owner & Contributors',
    'weight' => '8',
    'children' => array(
      0 => 'field_organicdata_owner',
      1 => 'field_organicdata_contributor',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Owner & Contributors',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_organicdata_contributors|node|organicdata_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_contributors|node|organicdata_project|form';
  $field_group->group_name = 'group_organicdata_contributors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Owner & Contributors',
    'weight' => '9',
    'children' => array(
      0 => 'field_organicdata_owner',
      1 => 'field_organicdata_contributor',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_contributors|node|organicdata_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_date|node|organicdata_project|form';
  $field_group->group_name = 'group_organicdata_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project dates',
    'weight' => '1',
    'children' => array(
      0 => 'field_organicdata_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Project dates',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_organicdata_date|node|organicdata_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_email|node|organicdata_individual|default';
  $field_group->group_name = 'group_organicdata_email';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_individual';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Email',
    'weight' => '1',
    'children' => array(
      0 => 'field_organicdata_email',
      1 => 'field_organicdata_emailcontext',
    ),
    'format_type' => 'field_group_multiple_container',
    'format_settings' => array(
      'label' => 'Email',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'parent_format_type' => 'div',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_organicdata_email|node|organicdata_individual|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_email|node|organicdata_individual|form';
  $field_group->group_name = 'group_organicdata_email';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_individual';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_contact';
  $field_group->data = array(
    'label' => 'Email',
    'weight' => '4',
    'children' => array(
      0 => 'field_organicdata_email',
      1 => 'field_organicdata_emailcontext',
    ),
    'format_type' => 'field_group_multiple_container',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'parent_format_type' => 'div',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_email|node|organicdata_individual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_infoabout|node|organicdata_article|form';
  $field_group->group_name = 'group_organicdata_infoabout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Described content',
    'weight' => '15',
    'children' => array(
      0 => 'field_organicdata_infoabout',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_infoabout|node|organicdata_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_infoabout|node|organicdata_file|form';
  $field_group->group_name = 'group_organicdata_infoabout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_file';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Described content',
    'weight' => '15',
    'children' => array(
      0 => 'field_organicdata_infoabout',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_infoabout|node|organicdata_file|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_infoabout|node|organicdata_link|form';
  $field_group->group_name = 'group_organicdata_infoabout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_link';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Described content',
    'weight' => '9',
    'children' => array(
      0 => 'field_organicdata_infoabout',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_infoabout|node|organicdata_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_infoabout|node|organicdata_note|form';
  $field_group->group_name = 'group_organicdata_infoabout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_note';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Described content',
    'weight' => '6',
    'children' => array(
      0 => 'field_organicdata_infoabout',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Described content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_organicdata_infoabout|node|organicdata_note|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_locationadd|node|organicdata_event|form';
  $field_group->group_name = 'group_organicdata_locationadd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_location';
  $field_group->data = array(
    'label' => 'Add Location',
    'weight' => '9',
    'children' => array(
      0 => 'field_organicdata_locatedat',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Add Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_organicdata_locationadd|node|organicdata_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_locationadd|node|organicdata_group|form';
  $field_group->group_name = 'group_organicdata_locationadd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_location';
  $field_group->data = array(
    'label' => 'Add Location',
    'weight' => '10',
    'children' => array(
      0 => 'field_organicdata_locatedat',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Add Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_organicdata_locationadd|node|organicdata_group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_locationadd|node|organicdata_individual|form';
  $field_group->group_name = 'group_organicdata_locationadd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_individual';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_address';
  $field_group->data = array(
    'label' => 'Add Location',
    'weight' => '19',
    'children' => array(
      0 => 'field_organicdata_locatedat',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Add Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_organicdata_locationadd|node|organicdata_individual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_locationadd|node|organicdata_project|form';
  $field_group->group_name = 'group_organicdata_locationadd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_location';
  $field_group->data = array(
    'label' => 'Add Location',
    'weight' => '8',
    'children' => array(
      0 => 'field_organicdata_locatedat',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Add Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_organicdata_locationadd|node|organicdata_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_location|node|organicdata_event|form';
  $field_group->group_name = 'group_organicdata_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '5',
    'children' => array(
      0 => 'field_organicdata_located',
      1 => 'group_organicdata_locationadd',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_location|node|organicdata_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_location|node|organicdata_group|form';
  $field_group->group_name = 'group_organicdata_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '10',
    'children' => array(
      0 => 'field_organicdata_located',
      1 => 'group_organicdata_locationadd',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_location|node|organicdata_group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_location|node|organicdata_project|form';
  $field_group->group_name = 'group_organicdata_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '10',
    'children' => array(
      0 => 'field_organicdata_located',
      1 => 'group_organicdata_locationadd',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_location|node|organicdata_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_name|node|organicdata_individual|form';
  $field_group->group_name = 'group_organicdata_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_individual';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '1',
    'children' => array(
      0 => 'field_organicdata_firstname',
      1 => 'field_organicdata_lastname',
    ),
    'format_type' => 'field_group_multiple_container',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'parent_format_type' => 'div',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_name|node|organicdata_individual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_owner|node|organicdata_location|form';
  $field_group->group_name = 'group_organicdata_owner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_location';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Owner',
    'weight' => '5',
    'children' => array(
      0 => 'field_organicdata_owner',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_owner|node|organicdata_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_phone|node|organicdata_individual|default';
  $field_group->group_name = 'group_organicdata_phone';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_individual';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phone',
    'weight' => '0',
    'children' => array(
      0 => 'field_organicdata_phone',
      1 => 'field_organicdata_phonecontext',
    ),
    'format_type' => 'field_group_multiple_container',
    'format_settings' => array(
      'label' => 'Phone',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'parent_format_type' => 'div',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_organicdata_phone|node|organicdata_individual|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_phone|node|organicdata_individual|form';
  $field_group->group_name = 'group_organicdata_phone';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_individual';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_contact';
  $field_group->data = array(
    'label' => 'Phone',
    'weight' => '3',
    'children' => array(
      0 => 'field_organicdata_phone',
      1 => 'field_organicdata_phonecontext',
    ),
    'format_type' => 'field_group_multiple_container',
    'format_settings' => array(
      'label' => 'Phone',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'parent_format_type' => 'fieldset',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_organicdata_phone|node|organicdata_individual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_photographed|node|organicdata_file|form';
  $field_group->group_name = 'group_organicdata_photographed';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_file';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Who is Pictured?',
    'weight' => '13',
    'children' => array(
      0 => 'field_organicdata_photoof',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Who is Pictured?',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_organicdata_photographed|node|organicdata_file|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_related|node|organicdata_article|form';
  $field_group->group_name = 'group_organicdata_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '16',
    'children' => array(
      0 => 'field_organicdata_related',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_related|node|organicdata_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_related|node|organicdata_event|form';
  $field_group->group_name = 'group_organicdata_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '6',
    'children' => array(
      0 => 'field_organicdata_related',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_related|node|organicdata_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_related|node|organicdata_file|form';
  $field_group->group_name = 'group_organicdata_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_file';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '16',
    'children' => array(
      0 => 'field_organicdata_related',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_related|node|organicdata_file|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_related|node|organicdata_group|form';
  $field_group->group_name = 'group_organicdata_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '11',
    'children' => array(
      0 => 'field_organicdata_related',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_related|node|organicdata_group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_related|node|organicdata_individual|form';
  $field_group->group_name = 'group_organicdata_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_individual';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '6',
    'children' => array(
      0 => 'field_organicdata_related',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Related content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_organicdata_related|node|organicdata_individual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_related|node|organicdata_link|form';
  $field_group->group_name = 'group_organicdata_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_link';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '10',
    'children' => array(
      0 => 'field_organicdata_related',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_related|node|organicdata_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_related|node|organicdata_location|form';
  $field_group->group_name = 'group_organicdata_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_location';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '6',
    'children' => array(
      0 => 'field_organicdata_related',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_related|node|organicdata_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_related|node|organicdata_note|form';
  $field_group->group_name = 'group_organicdata_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_note';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '7',
    'children' => array(
      0 => 'field_organicdata_related',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_related|node|organicdata_note|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_related|node|organicdata_project|form';
  $field_group->group_name = 'group_organicdata_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organicdata_relationships';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '11',
    'children' => array(
      0 => 'field_organicdata_related',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organicdata_related|node|organicdata_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_relationships|node|organicdata_article|form';
  $field_group->group_name = 'group_organicdata_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relationships',
    'weight' => '15',
    'children' => array(
      0 => 'group_organicdata_infoabout',
      1 => 'group_organicdata_contributors',
      2 => 'group_organicdata_related',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_organicdata_relationships|node|organicdata_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_relationships|node|organicdata_event|form';
  $field_group->group_name = 'group_organicdata_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relationships',
    'weight' => '8',
    'children' => array(
      0 => 'group_organicdata_location',
      1 => 'group_organicdata_contributors',
      2 => 'group_organicdata_related',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_organicdata_relationships|node|organicdata_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_relationships|node|organicdata_file|form';
  $field_group->group_name = 'group_organicdata_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_file';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relationships',
    'weight' => '3',
    'children' => array(
      0 => 'group_organicdata_contributors',
      1 => 'group_organicdata_infoabout',
      2 => 'group_organicdata_related',
      3 => 'group_organicdata_photographed',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_organicdata_relationships|node|organicdata_file|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_relationships|node|organicdata_group|form';
  $field_group->group_name = 'group_organicdata_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relationships',
    'weight' => '5',
    'children' => array(
      0 => 'group_organicdata_contributors',
      1 => 'group_organicdata_related',
      2 => 'group_organicdata_location',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_organicdata_relationships|node|organicdata_group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_relationships|node|organicdata_individual|form';
  $field_group->group_name = 'group_organicdata_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_individual';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relationships',
    'weight' => '5',
    'children' => array(
      0 => 'group_organicdata_related',
      1 => 'group_organicdata_contact',
      2 => 'group_organicdata_address',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Relationships',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_organicdata_relationships|node|organicdata_individual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_relationships|node|organicdata_link|form';
  $field_group->group_name = 'group_organicdata_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_link';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relationships',
    'weight' => '5',
    'children' => array(
      0 => 'group_organicdata_contributors',
      1 => 'group_organicdata_infoabout',
      2 => 'group_organicdata_related',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_organicdata_relationships|node|organicdata_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_relationships|node|organicdata_location|form';
  $field_group->group_name = 'group_organicdata_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relationships',
    'weight' => '4',
    'children' => array(
      0 => 'group_organicdata_owner',
      1 => 'group_organicdata_related',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_organicdata_relationships|node|organicdata_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_relationships|node|organicdata_note|form';
  $field_group->group_name = 'group_organicdata_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_note';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relationships',
    'weight' => '4',
    'children' => array(
      0 => 'group_organicdata_infoabout',
      1 => 'group_organicdata_related',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_organicdata_relationships|node|organicdata_note|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organicdata_relationships|node|organicdata_project|form';
  $field_group->group_name = 'group_organicdata_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organicdata_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relationships',
    'weight' => '4',
    'children' => array(
      0 => 'group_organicdata_contributors',
      1 => 'group_organicdata_related',
      2 => 'group_organicdata_location',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_organicdata_relationships|node|organicdata_project|form'] = $field_group;

  return $export;
}
