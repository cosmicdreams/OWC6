<?php

/**
 * @file
 * Defines the "form" in-place editor.
 *
 * @see Drupal 8's \Drupal\edit\Plugin\InPlaceEditor\FormEditor.
 */

module_load_include('php', 'edit', 'includes/EditInPlaceEditorInterface');

/**
 * Defines the form in-place editor.
 */
class FormEditor implements EditInPlaceEditorInterface{

  /**
   * Implements EditInPlaceEditorInterface::isCompatible().
   *
   * @see Drupal 8's \Drupal\edit\Plugin\InPlaceEditor\FormEditor::isCompatible().
   */
  public function isCompatible(array $instance, array $items) {
    return TRUE;
  }

  /**
   * Implements EditInPlaceEditorInterface::getMetadata().
   *
   * @see Drupal 8's \Drupal\edit\Plugin\InPlaceEditor\FormEditor::getMetadata().
   */
  public function getMetadata(array $instance, array $items) {
    return array();
  }

  /**
   * Implements EditInPlaceEditorInterface::getAttachments().
   *
   * @see Drupal 8's \Drupal\edit\Plugin\InPlaceEditor\FormEditor::isCompatible().
   */
  public function getAttachments() {
    return array(
      'library' => array(
        array('edit', 'edit.inPlaceEditor.form'),
      ),
    );
  }

}
