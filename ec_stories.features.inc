<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ec_stories_content_default_fields() {
  module_load_include('inc', 'ec_stories', 'ec_stories.defaults');
  $args = func_get_args();
  return call_user_func_array('_ec_stories_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ec_stories_ctools_plugin_api() {
  module_load_include('inc', 'ec_stories', 'ec_stories.defaults');
  $args = func_get_args();
  return call_user_func_array('_ec_stories_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_feeds_importer_default().
 */
function ec_stories_feeds_importer_default() {
  module_load_include('inc', 'ec_stories', 'ec_stories.defaults');
  $args = func_get_args();
  return call_user_func_array('_ec_stories_feeds_importer_default', $args);
}

/**
 * Implementation of hook_node_info().
 */
function ec_stories_node_info() {
  module_load_include('inc', 'ec_stories', 'ec_stories.features.node');
  $args = func_get_args();
  return call_user_func_array('_ec_stories_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function ec_stories_strongarm() {
  module_load_include('inc', 'ec_stories', 'ec_stories.defaults');
  $args = func_get_args();
  return call_user_func_array('_ec_stories_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function ec_stories_views_default_views() {
  module_load_include('inc', 'ec_stories', 'ec_stories.features.views');
  $args = func_get_args();
  return call_user_func_array('_ec_stories_views_default_views', $args);
}
