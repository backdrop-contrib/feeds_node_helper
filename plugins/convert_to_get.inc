<?php

/**
 * @file
 * Convert to GET value - ignores current value and instead allows for the use
 * of a value present in the address bar at the time of import.
 */

/**
 * Form for building the GET conversion.
 */
function feeds_node_helper_convert_to_get_form($importer, $element_key, $settings) {
  $form = array();
  $form['get_arg'] = array(
    '#type' => 'textfield',
    '#title' => t('GET argument to use'),
    '#default_value' => isset($settings['get_arg']) ? $settings['get_arg'] : ''
  );
  return $form;
}

/**
 * Helper function to process the value conversion.
 */
function feeds_node_helper_convert_to_get_callback($result, $item_key, $element_key, &$field, $settings) {
  // Build the list of arguments that existed at form time.
  $args = unserialize($result->config['FeedsHTTPFetcher']['feeds_node_helper_args']);
  // Only set a value if the key exists.
  // Scrub the get_argument as well since it's a text input.
  $get_arg = filter_xss(check_plain($settings['get_arg']));
  if (isset($args[$get_arg])) {
    // Even though we filtered already, do it again.
    $field = filter_xss(check_plain($args[$get_arg]));
  }
}
