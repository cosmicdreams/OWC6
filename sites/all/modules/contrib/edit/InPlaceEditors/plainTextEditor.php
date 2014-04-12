<?php

/**
 * @file
 * Defines the "plain_text" in-place editor.
 *
 * @see Drupal 8's \Drupal\edit\Plugin\InPlaceEditor\PlainTextEditor.
 */

module_load_include('php', 'edit', 'includes/EditInPlaceEditorInterface');

/**
 * Defines the plain text in-place editor.
 */
class PlainTextEditor implements EditInPlaceEditorInterface{

  /**
   * Implements EditInPlaceEditorInterface::isCompatible().
   *
   * @see Drupal 8's \Drupal\edit\Plugin\InPlaceEditor\PlainTextEditor::isCompatible().
   */
  public function isCompatible(array $instance, array $items) {
    $field = field_info_field($instance['field_name']);

    // This editor is incompatible with multivalued fields.
    $cardinality_allows = $field['cardinality'] == 1;
    // This editor is incompatible with processed ("rich") text fields.
    $no_text_processing = empty($instance['settings']['text_processing']);

    return $cardinality_allows && $no_text_processing;
  }

  /**
   * Implements EditInPlaceEditorInterface::getMetadata().
   *
   * @see Drupal 8's \Drupal\edit\Plugin\InPlaceEditor\PlainTextEditor::getMetadata().
   */
  public function getMetadata(array $instance, array $items) {
    return array();
  }

  /**
   * Implements EditInPlaceEditorInterface::getAttachments().
   *
   * @see Drupal 8's \Drupal\edit\Plugin\InPlaceEditor\PlainTextEditor::getAttachments().
   */
  public function getAttachments() {
    return array(
      'library' => array(
        array('edit', 'edit.inPlaceEditor.plainText'),
      ),
    );
  }

}
