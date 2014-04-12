<?php
/**
 * @file
 * hfl_requestatour.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hfl_requestatour_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function hfl_requestatour_default_entityform_type() {
  $items = array();
  $items['requestatour'] = entity_import('entityform_type', '{
    "type" : "requestatour",
    "label" : "Request a Tour",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "plain_text" },
      "submit_button_text" : "Request Tour",
      "submit_confirm_msg" : "[editable: You have requested a tour. Good job!]",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "[editable: Thanks for requesting a tour!]",
      "submission_text" : {
        "value" : "[editable: Thank you for requesting a tour. HFL will contact you.]",
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
        "value" : "[editable: Would you like to take a tour? Fill out this form!]",
        "format" : "plain_text"
      }
    },
    "weight" : "0"
  }');
  return $items;
}
