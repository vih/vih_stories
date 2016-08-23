<?php
/**
 * @file
 * vih_stories.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function vih_stories_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'story';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:story:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '6ed406ac-4633-411a-915e-66bc9dcb2ccf';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:story:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-85b4d3cc-daf5-4407-bbae-1fd5d241837c';
  $pane->panel = 'contentmain';
  $pane->type = 'node_submitted';
  $pane->subtype = 'node_submitted';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'format' => 'medium',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '85b4d3cc-daf5-4407-bbae-1fd5d241837c';
  $display->content['new-85b4d3cc-daf5-4407-bbae-1fd5d241837c'] = $pane;
  $display->panels['contentmain'][0] = 'new-85b4d3cc-daf5-4407-bbae-1fd5d241837c';
  $pane = new stdClass();
  $pane->pid = 'new-2e331f47-f57c-428b-be5c-535fbd8e38cb';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2e331f47-f57c-428b-be5c-535fbd8e38cb';
  $display->content['new-2e331f47-f57c-428b-be5c-535fbd8e38cb'] = $pane;
  $display->panels['contentmain'][1] = 'new-2e331f47-f57c-428b-be5c-535fbd8e38cb';
  $pane = new stdClass();
  $pane->pid = 'new-f40da7bc-23a7-48ab-8c3a-a14339be5d31';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f40da7bc-23a7-48ab-8c3a-a14339be5d31';
  $display->content['new-f40da7bc-23a7-48ab-8c3a-a14339be5d31'] = $pane;
  $display->panels['contentmain'][2] = 'new-f40da7bc-23a7-48ab-8c3a-a14339be5d31';
  $pane = new stdClass();
  $pane->pid = 'new-4055874f-c463-4b86-a66c-6811ba3ec0a2';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_pictures';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'colorbox',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_image_style' => 'panopoly_image_full',
      'colorbox_multivalue_index' => NULL,
      'colorbox_node_style' => 'panopoly_image_spotlight',
      'colorbox_node_style_first' => '',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4055874f-c463-4b86-a66c-6811ba3ec0a2';
  $display->content['new-4055874f-c463-4b86-a66c-6811ba3ec0a2'] = $pane;
  $display->panels['contentmain'][3] = 'new-4055874f-c463-4b86-a66c-6811ba3ec0a2';
  $pane = new stdClass();
  $pane->pid = 'new-ea276ac1-fdd7-414a-98a1-b167b716d3d8';
  $pane->panel = 'contentmain';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'ea276ac1-fdd7-414a-98a1-b167b716d3d8';
  $display->content['new-ea276ac1-fdd7-414a-98a1-b167b716d3d8'] = $pane;
  $display->panels['contentmain'][4] = 'new-ea276ac1-fdd7-414a-98a1-b167b716d3d8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-85b4d3cc-daf5-4407-bbae-1fd5d241837c';
  $panelizer->display = $display;
  $export['node:story:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'story';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'node:story:default:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f852294f-acc5-4bcd-bfa6-db3184247a06';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:story:default:default';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:story:default:default'] = $panelizer;

  return $export;
}
