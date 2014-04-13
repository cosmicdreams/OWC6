<?php

/**
 * Validation handler for the donation form.
 */
function _hfl_donate_form_donate_entityform_edit_form_validate($form, &$form_state) {

  $amount = $form_state['values']['field_donate_amount']['und'][0]['value'];
  
  $payments = $form_state['values']['field_donate_payments']['und'][0]['value'];
  $other = $form_state['values']['field_donate_other']['und'][0]['value'];

  if (!$amount && !$payments) {
    form_set_error('field_donate_amount', 'Please specify either a one-time amount or a recurring amount, but not both.');
  }

  if ($amount && $payments) {
    form_set_error('field_donate_amount', 'Please specify either a one-time amount or a recurring amount, but not both.');
    form_set_error('field_donate_payments', '');
  }

  if ($payments == 'other' && !$other) {
    form_set_error('field_donate_other', 'You did not specify an alternative amount');
  }

  $tributetype = $form_state['values']['field_donate_tributetype']['und'][0]['value'];
  $tributename = $form_state['values']['field_donate_tributename']['und'][0]['value'];

  if ($tributetype && !$tributename) {
    form_set_error('field_donate_tributename', 'Please specify a name for your tribute.');
  }

  if ($tributetype && !$tributename) {
    form_set_error('field_donate_tributename', 'Please specify a name for your tribute.');
  }

}

/**
 * Submit handler for the donation form.
 */
function _hfl_donate_form_donate_entityform_edit_form_submit($form, &$form_state) {
  kpr($form_state);
  die();
}
