<?php

/**
 * @file
 * Allow for mapping to current user ID.
 */

/**
 * Form for building the user ID map, no options needed.
 */
function feeds_node_helper_userid_form($importer, $element_key, $settings) {
  $form = array();
  return $form;
}

/**
 * Helper function to process the value conversion.
 */
function feeds_node_helper_userid_callback($result, $item_key, $element_key, &$field, $settings) {
  // Account for command line interfaces.
  if (!backdrop_is_cli()) {
    global $user;
    $field = $user->uid;
  }
  // CLI comes up as anonymous so ignore field tamper
}
