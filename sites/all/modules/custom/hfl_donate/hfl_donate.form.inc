<?php

/**
 * Define a donation form. 
 */
function hfl_donate_donation_form($form, &$form_state) {
  $form = array();

  $form['firstname'] = array(
    '#type' => 'textfield',
    '#title' => t('First Name'),
  );

  return $form;
}

