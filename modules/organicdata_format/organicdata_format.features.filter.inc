<?php
/**
 * @file
 * organicdata_format.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function organicdata_format_filter_default_formats() {
  $formats = array();

  // Exported format: markdown.
  $formats['markdown'] = array(
    'format' => 'markdown',
    'name' => 'markdown',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <div> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <img> <br>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'codefilter' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_markdown' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'typogrify' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'smartypants_enabled' => 1,
          'smartypants_hyphens' => 2,
          'wrap_ampersand' => 1,
          'widont_enabled' => 1,
          'hyphenate_shy' => 0,
          'wrap_abbr' => 0,
          'wrap_caps' => 1,
          'wrap_initial_quotes' => 1,
          'wrap_numbers' => 0,
          'ligatures' => array(
            'ffi' => 0,
            'ffl' => 0,
            'ff' => 0,
            'fi' => 0,
            'fl' => 0,
            'ij' => 0,
            'IJ' => 0,
            'st' => 0,
            'ss' => 0,
          ),
          'arrows' => array(
            '->>' => '->>',
            '<<-' => '<<-',
            '->|' => '->|',
            '|<-' => '|<-',
            '<->' => '<->',
            '->' => '->',
            '<-' => '<-',
            '<=>' => 0,
            '=>' => 0,
            '<=' => 0,
          ),
          'fractions' => array(),
          'quotes' => array(),
          'long_s' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
