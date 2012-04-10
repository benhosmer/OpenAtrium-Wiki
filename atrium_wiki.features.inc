<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_wiki_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function atrium_wiki_node_info() {
  $items = array(
    'wiki' => array(
      'name' => t('Wiki'),
      'module' => 'features',
      'description' => t('A wiki post allows users to create a post that other users can add to and edit. Wiki posts also utilize the talk module which moves the comments to a separate tab.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function atrium_wiki_views_api() {
  return array(
    'api' => '2',
  );
}
