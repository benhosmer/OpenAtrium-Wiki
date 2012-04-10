<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function atrium_wiki_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:wiki
  $menu_links['features:wiki'] = array(
    'menu_name' => 'features',
    'link_path' => 'wiki',
    'router_path' => 'wiki',
    'link_title' => 'Wiki',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:node/add/wiki
  $menu_links['navigation:node/add/wiki'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/wiki',
    'router_path' => 'node/add/wiki',
    'link_title' => 'Wiki',
    'options' => array(
      'attributes' => array(
        'title' => 'A wiki post allows users to create a post that other users can add to and edit. Wiki posts also utilize the talk module which moves the comments to a separate tab.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Wiki');


  return $menu_links;
}
