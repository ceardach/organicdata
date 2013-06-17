<?php
/**
 * @file
 * organicdata.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function organicdata_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-organicdata_article-field_organicdata_body'
  $field_instances['node-organicdata_article-field_organicdata_body'] = array(
    'bundle' => 'organicdata_article',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 'markdown',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_body',
    'label' => 'Content',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'markdown' => 'markdown',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'markdown' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-organicdata_article-field_organicdata_contributor'
  $field_instances['node-organicdata_article-field_organicdata_contributor'] = array(
    'bundle' => 'organicdata_article',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_contributor',
    'label' => 'Contributors',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_worked_on' => 'is_worked_on',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-organicdata_article-field_organicdata_infoabout'
  $field_instances['node-organicdata_article-field_organicdata_infoabout'] = array(
    'bundle' => 'organicdata_article',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_infoabout',
    'label' => 'Information about',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'contains_information_about' => 'contains_information_about',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-organicdata_article-field_organicdata_owner'
  $field_instances['node-organicdata_article-field_organicdata_owner'] = array(
    'bundle' => 'organicdata_article',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_owner',
    'label' => 'Owner',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_owned_by' => 'is_owned_by',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-organicdata_article-field_organicdata_related'
  $field_instances['node-organicdata_article-field_organicdata_related'] = array(
    'bundle' => 'organicdata_article',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_related_to' => 'is_related_to',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'endpoint',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-organicdata_event-field_organicdata_body'
  $field_instances['node-organicdata_event-field_organicdata_body'] = array(
    'bundle' => 'organicdata_event',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 'markdown',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 300,
        ),
        'type' => 'text_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'markdown' => 'markdown',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'markdown' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-organicdata_event-field_organicdata_contributor'
  $field_instances['node-organicdata_event-field_organicdata_contributor'] = array(
    'bundle' => 'organicdata_event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_otherendpoint',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_contributor',
    'label' => 'Contributors',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_worked_on' => 'is_worked_on',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-organicdata_event-field_organicdata_date'
  $field_instances['node-organicdata_event-field_organicdata_date'] = array(
    'bundle' => 'organicdata_event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-organicdata_event-field_organicdata_located'
  $field_instances['node-organicdata_event-field_organicdata_located'] = array(
    'bundle' => 'organicdata_event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_add',
        'settings' => array(),
        'type' => 'relation_add_endpoints_and_fields',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_located',
    'label' => 'Reference Location',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_located_at' => 'is_located_at',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-organicdata_event-field_organicdata_locatedat'
  $field_instances['node-organicdata_event-field_organicdata_locatedat'] = array(
    'bundle' => 'organicdata_event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_locatedat',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_located_at' => 'is_located_at',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_edit',
      'settings' => array(
        'delete_endpoint' => 0,
        'hidden_fields' => array(
          0 => 'actions',
          1 => 'options',
          2 => 'revision_information',
          3 => 'author',
          4 => 'additional_settings',
        ),
        'hidden_fields_relation' => array(
          0 => 'actions',
          1 => 'endpoints',
        ),
        'node_bundle' => 'organicdata_location',
      ),
      'type' => 'relation_edit',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-organicdata_event-field_organicdata_owner'
  $field_instances['node-organicdata_event-field_organicdata_owner'] = array(
    'bundle' => 'organicdata_event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_otherendpoint',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_owner',
    'label' => 'Organizer',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_owned_by' => 'is_owned_by',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-organicdata_event-field_organicdata_related'
  $field_instances['node-organicdata_event-field_organicdata_related'] = array(
    'bundle' => 'organicdata_event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_related_to' => 'is_related_to',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'endpoint',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-organicdata_file-field_organicdata_body'
  $field_instances['node-organicdata_file-field_organicdata_body'] = array(
    'bundle' => 'organicdata_file',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 'markdown',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 300,
        ),
        'type' => 'text_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'markdown' => 'markdown',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'markdown' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-organicdata_file-field_organicdata_contributor'
  $field_instances['node-organicdata_file-field_organicdata_contributor'] = array(
    'bundle' => 'organicdata_file',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_otherendpoint',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_contributor',
    'label' => 'Contributors',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-organicdata_file-field_organicdata_file'
  $field_instances['node-organicdata_file-field_organicdata_file'] = array(
    'bundle' => 'organicdata_file',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_file',
    'label' => 'File',
    'required' => 1,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'organicfiles',
      'file_extensions' => 'doc docx gif jpg jpeg mpg mpeg mp3 odt odp ods pdf ppt pptx tif tiff txt xls xlsx wav zip tar gz',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-organicdata_file-field_organicdata_infoabout'
  $field_instances['node-organicdata_file-field_organicdata_infoabout'] = array(
    'bundle' => 'organicdata_file',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_otherendpoint',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_infoabout',
    'label' => 'Information about',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'contains_information_about' => 'contains_information_about',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-organicdata_file-field_organicdata_owner'
  $field_instances['node-organicdata_file-field_organicdata_owner'] = array(
    'bundle' => 'organicdata_file',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_otherendpoint',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_owner',
    'label' => 'Owner',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_owned_by' => 'is_owned_by',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-organicdata_file-field_organicdata_photoof'
  $field_instances['node-organicdata_file-field_organicdata_photoof'] = array(
    'bundle' => 'organicdata_file',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_photoof',
    'label' => 'Photo of',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'contains_photo_of' => 'contains_photo_of',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-organicdata_file-field_organicdata_related'
  $field_instances['node-organicdata_file-field_organicdata_related'] = array(
    'bundle' => 'organicdata_file',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_related_to' => 'is_related_to',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'endpoint',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-organicdata_group-field_organicdata_body'
  $field_instances['node-organicdata_group-field_organicdata_body'] = array(
    'bundle' => 'organicdata_group',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 'markdown',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 300,
        ),
        'type' => 'text_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'markdown' => 'markdown',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'markdown' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-organicdata_group-field_organicdata_contributor'
  $field_instances['node-organicdata_group-field_organicdata_contributor'] = array(
    'bundle' => 'organicdata_group',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_otherendpoint',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_contributor',
    'label' => 'Contributors',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_worked_on' => 'is_worked_on',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-organicdata_group-field_organicdata_email'
  $field_instances['node-organicdata_group-field_organicdata_email'] = array(
    'bundle' => 'organicdata_group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-organicdata_group-field_organicdata_located'
  $field_instances['node-organicdata_group-field_organicdata_located'] = array(
    'bundle' => 'organicdata_group',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_add',
        'settings' => array(),
        'type' => 'relation_add_endpoints_and_fields',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_located',
    'label' => 'Reference Location',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_located_at' => 'is_located_at',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-organicdata_group-field_organicdata_locatedat'
  $field_instances['node-organicdata_group-field_organicdata_locatedat'] = array(
    'bundle' => 'organicdata_group',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_locatedat',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_edit',
      'settings' => array(
        'delete_endpoint' => 0,
        'hidden_fields' => array(
          0 => 'actions',
          1 => 'options',
          2 => 'revision_information',
          3 => 'author',
          4 => 'additional_settings',
        ),
        'hidden_fields_relation' => array(
          0 => 'actions',
          1 => 'endpoints',
        ),
        'node_bundle' => 'organicdata_location',
      ),
      'type' => 'relation_edit',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-organicdata_group-field_organicdata_owner'
  $field_instances['node-organicdata_group-field_organicdata_owner'] = array(
    'bundle' => 'organicdata_group',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_otherendpoint',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_owner',
    'label' => 'Owner',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_owned_by' => 'is_owned_by',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-organicdata_group-field_organicdata_phone'
  $field_instances['node-organicdata_group-field_organicdata_phone'] = array(
    'bundle' => 'organicdata_group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'phone_country_code' => 0,
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-organicdata_group-field_organicdata_related'
  $field_instances['node-organicdata_group-field_organicdata_related'] = array(
    'bundle' => 'organicdata_group',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_related_to' => 'is_related_to',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'endpoint',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-organicdata_individual-field_organicdata_body'
  $field_instances['node-organicdata_individual-field_organicdata_body'] = array(
    'bundle' => 'organicdata_individual',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 'markdown',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 300,
        ),
        'type' => 'text_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_body',
    'label' => 'Bio',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'markdown' => 'markdown',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'markdown' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-organicdata_individual-field_organicdata_email'
  $field_instances['node-organicdata_individual-field_organicdata_email'] = array(
    'bundle' => 'organicdata_individual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-organicdata_individual-field_organicdata_emailcontext'
  $field_instances['node-organicdata_individual-field_organicdata_emailcontext'] = array(
    'bundle' => 'organicdata_individual',
    'default_value' => array(
      0 => array(
        'value' => 'home',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_emailcontext',
    'label' => 'Context',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-organicdata_individual-field_organicdata_firstname'
  $field_instances['node-organicdata_individual-field_organicdata_firstname'] = array(
    'bundle' => 'organicdata_individual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_firstname',
    'label' => 'First name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-organicdata_individual-field_organicdata_lastname'
  $field_instances['node-organicdata_individual-field_organicdata_lastname'] = array(
    'bundle' => 'organicdata_individual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_lastname',
    'label' => 'Last name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-organicdata_individual-field_organicdata_located'
  $field_instances['node-organicdata_individual-field_organicdata_located'] = array(
    'bundle' => 'organicdata_individual',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_located',
    'label' => 'Reference Location',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_located_at' => 'is_located_at',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-organicdata_individual-field_organicdata_locatedat'
  $field_instances['node-organicdata_individual-field_organicdata_locatedat'] = array(
    'bundle' => 'organicdata_individual',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_locatedat',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_located_at' => 'is_located_at',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_edit',
      'settings' => array(
        'delete_endpoint' => 1,
        'hidden_fields' => array(
          0 => 'actions',
          1 => 'options',
          2 => 'revision_information',
          3 => 'author',
          4 => 'additional_settings',
        ),
        'hidden_fields_relation' => array(
          0 => 'actions',
          1 => 'endpoints',
        ),
        'node_bundle' => 'organicdata_location',
      ),
      'type' => 'relation_edit',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-organicdata_individual-field_organicdata_phone'
  $field_instances['node-organicdata_individual-field_organicdata_phone'] = array(
    'bundle' => 'organicdata_individual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'phone_country_code' => 1,
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-organicdata_individual-field_organicdata_phonecontext'
  $field_instances['node-organicdata_individual-field_organicdata_phonecontext'] = array(
    'bundle' => 'organicdata_individual',
    'default_value' => array(
      0 => array(
        'value' => 'mobile',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_phonecontext',
    'label' => 'Context',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-organicdata_individual-field_organicdata_related'
  $field_instances['node-organicdata_individual-field_organicdata_related'] = array(
    'bundle' => 'organicdata_individual',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_related_to' => 'is_related_to',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'endpoint',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-organicdata_link-field_organicdata_body'
  $field_instances['node-organicdata_link-field_organicdata_body'] = array(
    'bundle' => 'organicdata_link',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 'markdown',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 300,
        ),
        'type' => 'text_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'markdown' => 'markdown',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'markdown' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-organicdata_link-field_organicdata_contributor'
  $field_instances['node-organicdata_link-field_organicdata_contributor'] = array(
    'bundle' => 'organicdata_link',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_add',
        'settings' => array(),
        'type' => 'relation_add_endpoints_and_fields',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_contributor',
    'label' => 'Contributors',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_worked_on' => 'is_worked_on',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-organicdata_link-field_organicdata_infoabout'
  $field_instances['node-organicdata_link-field_organicdata_infoabout'] = array(
    'bundle' => 'organicdata_link',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_otherendpoint',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_infoabout',
    'label' => 'Information about',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-organicdata_link-field_organicdata_link'
  $field_instances['node-organicdata_link-field_organicdata_link'] = array(
    'bundle' => 'organicdata_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_link',
    'label' => 'Link',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_maxlength' => 255,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-organicdata_link-field_organicdata_owner'
  $field_instances['node-organicdata_link-field_organicdata_owner'] = array(
    'bundle' => 'organicdata_link',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_add',
        'settings' => array(),
        'type' => 'relation_add_endpoints_and_fields',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_owner',
    'label' => 'Owner',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_owned_by' => 'is_owned_by',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-organicdata_link-field_organicdata_related'
  $field_instances['node-organicdata_link-field_organicdata_related'] = array(
    'bundle' => 'organicdata_link',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_related_to' => 'is_related_to',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-organicdata_location-field_organicdata_body'
  $field_instances['node-organicdata_location-field_organicdata_body'] = array(
    'bundle' => 'organicdata_location',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 'markdown',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 300,
        ),
        'type' => 'text_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'markdown' => 'markdown',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'markdown' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-organicdata_location-field_organicdata_location'
  $field_instances['node-organicdata_location-field_organicdata_location'] = array(
    'bundle' => 'organicdata_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_location',
    'label' => 'Location',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-organicdata_location-field_organicdata_owner'
  $field_instances['node-organicdata_location-field_organicdata_owner'] = array(
    'bundle' => 'organicdata_location',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_add',
        'settings' => array(),
        'type' => 'relation_add_endpoints_and_fields',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_owner',
    'label' => 'Owner',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_owned_by' => 'is_owned_by',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-organicdata_location-field_organicdata_related'
  $field_instances['node-organicdata_location-field_organicdata_related'] = array(
    'bundle' => 'organicdata_location',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_related_to' => 'is_related_to',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-organicdata_note-field_organicdata_body'
  $field_instances['node-organicdata_note-field_organicdata_body'] = array(
    'bundle' => 'organicdata_note',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 'markdown',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 300,
        ),
        'type' => 'text_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_body',
    'label' => 'Notes',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'markdown' => 'markdown',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'markdown' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 8,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-organicdata_note-field_organicdata_infoabout'
  $field_instances['node-organicdata_note-field_organicdata_infoabout'] = array(
    'bundle' => 'organicdata_note',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_otherendpoint',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_infoabout',
    'label' => 'Information about',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'contains_information_about' => 'contains_information_about',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-organicdata_note-field_organicdata_related'
  $field_instances['node-organicdata_note-field_organicdata_related'] = array(
    'bundle' => 'organicdata_note',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_related_to' => 'is_related_to',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-organicdata_project-field_organicdata_body'
  $field_instances['node-organicdata_project-field_organicdata_body'] = array(
    'bundle' => 'organicdata_project',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 'markdown',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 300,
        ),
        'type' => 'text_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'markdown' => 'markdown',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'markdown' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-organicdata_project-field_organicdata_contributor'
  $field_instances['node-organicdata_project-field_organicdata_contributor'] = array(
    'bundle' => 'organicdata_project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_otherendpoint',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_contributor',
    'label' => 'Contributors',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_worked_on' => 'is_worked_on',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-organicdata_project-field_organicdata_date'
  $field_instances['node-organicdata_project-field_organicdata_date'] = array(
    'bundle' => 'organicdata_project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-organicdata_project-field_organicdata_located'
  $field_instances['node-organicdata_project-field_organicdata_located'] = array(
    'bundle' => 'organicdata_project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_add',
        'settings' => array(),
        'type' => 'relation_add_endpoints_and_fields',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_located',
    'label' => 'Reference Location',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_located_at' => 'is_located_at',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-organicdata_project-field_organicdata_locatedat'
  $field_instances['node-organicdata_project-field_organicdata_locatedat'] = array(
    'bundle' => 'organicdata_project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_locatedat',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_located_at' => 'is_located_at',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_edit',
      'settings' => array(
        'delete_endpoint' => 0,
        'hidden_fields' => array(
          0 => 'actions',
          1 => 'options',
          2 => 'revision_information',
          3 => 'author',
          4 => 'additional_settings',
        ),
        'hidden_fields_relation' => array(
          0 => 'actions',
          1 => 'endpoints',
        ),
        'node_bundle' => 'organicdata_location',
      ),
      'type' => 'relation_edit',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-organicdata_project-field_organicdata_owner'
  $field_instances['node-organicdata_project-field_organicdata_owner'] = array(
    'bundle' => 'organicdata_project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_otherendpoint',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_owner',
    'label' => 'Owner',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_owned_by' => 'is_owned_by',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-organicdata_project-field_organicdata_related'
  $field_instances['node-organicdata_project-field_organicdata_related'] = array(
    'bundle' => 'organicdata_project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organicdata_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'is_related_to' => 'is_related_to',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'relation-contains_information_about-endpoints'
  $field_instances['relation-contains_information_about-endpoints'] = array(
    'bundle' => 'contains_information_about',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'file' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'user' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'relation-contains_photo_of-endpoints'
  $field_instances['relation-contains_photo_of-endpoints'] = array(
    'bundle' => 'contains_photo_of',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'file' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'user' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'relation-is_located_at-endpoints'
  $field_instances['relation-is_located_at-endpoints'] = array(
    'bundle' => 'is_located_at',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'file' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'user' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'relation-is_owned_by-endpoints'
  $field_instances['relation-is_owned_by-endpoints'] = array(
    'bundle' => 'is_owned_by',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'file' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'user' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'relation-is_related_to-endpoints'
  $field_instances['relation-is_related_to-endpoints'] = array(
    'bundle' => 'is_related_to',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'file' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'user' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'relation-is_worked_on-endpoints'
  $field_instances['relation-is_worked_on-endpoints'] = array(
    'bundle' => 'is_worked_on',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'file' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'user' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bio');
  t('Content');
  t('Context');
  t('Contributors');
  t('Date');
  t('Description');
  t('Email');
  t('File');
  t('First name');
  t('Information about');
  t('Last name');
  t('Link');
  t('Location');
  t('Notes');
  t('Organizer');
  t('Owner');
  t('Phone');
  t('Photo of');
  t('Reference Location');
  t('Related content');
  t('endpoints');

  return $field_instances;
}
