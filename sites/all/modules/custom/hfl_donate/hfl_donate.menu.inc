<?php

function _hfl_donate_menu_donate() {
  $form = drupal_get_form('hfl_donate_donation_form');
  return render($form);
}

