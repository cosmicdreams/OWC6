<?php
/**
 * @file
 * pet_profile.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pet_profile_taxonomy_default_vocabularies() {
  return array(
    'pet_type' => array(
      'name' => 'Pet Type',
      'machine_name' => 'pet_type',
      'description' => 'Cat, Dog, Turtle, etc...',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
