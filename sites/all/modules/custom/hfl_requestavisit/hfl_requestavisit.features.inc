<?php
/**
 * @file
 * hfl_requestavisit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hfl_requestavisit_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function hfl_requestavisit_default_entityform_type() {
  $items = array();
  $items['requestavisit'] = entity_import('entityform_type', '{
    "type" : "requestavisit",
    "label" : "Request a Visit",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "plain_text" },
      "submit_button_text" : "Request Visit",
      "submit_confirm_msg" : "[editable: confirmed!]",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "[editable: Thanks!]",
      "submission_text" : {
        "value" : "[editable: Thanks for submitting the form. HFL will contact you.]",
        "format" : "plain_text"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2" },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "[editable: Would you like an animal to visit you? Then submit this form!]",
        "format" : "plain_text"
      }
    },
    "weight" : "0"
  }');
  return $items;
}
