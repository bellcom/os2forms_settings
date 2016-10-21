<?php
/**
 * @file
 * os2forms_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2forms_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_existing';
  $strongarm->value = 'revision';
  $export['node_export_existing'] = $strongarm;

  return $export;
}