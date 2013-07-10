<?php

/**
 * @file
 *   Create ad interactive PHP shell.
 */

/**
 * Implementation of hook_drush_command().
 *
 * @return
 *   An associative array describing your command(s).
 */
function php_cli_drush_command() {
  $items = array();

  // The 'xkcd' command
  $items['php-cli'] = array(
    'description' => "Create a interactive shell.",
    'examples' => array(
      'drush php-cli' => 'Open a PHP Shell.',
    ),
  );

  return $items;
}

/**
 * Create ad interactive PHP shell with bootstrapped Drupal.
 *
 * @see drush_invoke()
 * @see drush.api.php
 */
function drush_php_cli() {
  require_once __DIR__ . '/vendor/autoload.php';

  $boris = new \Boris\Boris('> ');
  $boris->setInspector(new \Boris\ColoredInspector());
  $boris->start();
}
