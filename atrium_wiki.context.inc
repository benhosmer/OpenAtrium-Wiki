<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_wiki_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wiki_listing';
  $context->description = '';
  $context->tag = 'Wiki';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'wiki' => 'wiki',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'wiki_listing' => 'wiki_listing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-wiki_comments-block_1' => array(
          'module' => 'views',
          'delta' => 'wiki_comments-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'wiki',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Wiki');
  $export['wiki_listing'] = $context;

  return $export;
}
