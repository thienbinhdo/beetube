<?php

/**
 * @file
 * Facet API hook implementations.
 */

/**
 * Implements hook_facetapi_adapters().
 */
function search_facetapi_facetapi_adapters() {
  return array(
    'search' => array(
      'handler' => array(
        'class' => 'SearchFacetapiAdapter',
      ),
    ),
  );
}

/**
 * Implements hook_facetapi_query_types().
 */
function search_facetapi_facetapi_query_types() {
  return array(
    'search_term' => array(
      'handler' => array(
        'class' => 'SearchFacetapiTerm',
        'adapter' => 'search',
      ),
    ),
    'search_date' => array(
      'handler' => array(
        'class' => 'SearchFacetapiDate',
        'adapter' => 'search',
      ),
    ),
  );
}

/**
 * Implements hook_facetapi_facet_info().
 */
function search_facetapi_facetapi_facet_info(array $searcher_info) {
  $facets = array();
  if ('search' == $searcher_info['adapter'] && isset($searcher_info['types']['node'])) {
    $entity_type = 'node';

    // Gets field mappings.
    $mappings = module_invoke_all('search_facetapi_field_mappings');
    drupal_alter('search_facetapi_field_mappings', $mappings);

    // Iterates over fields and builds facet definitions.
    $instances = field_info_instances($entity_type);
    foreach (field_info_fields() as $field_name => $field) {
      // Makes sure the field is mapped and attached to a bundle in the entity
      // we are indexing.
      if (isset($mappings[$field['type']]) && isset($field['bundles'][$entity_type])) {
        $label = FALSE;

        // If we don't have a label, the field should not be faceted on.
        foreach ($field['bundles'][$entity_type] as $bundle) {
          $display = $instances[$bundle][$field_name]['display'];
          if (empty($display['search_index']) || 'hidden' != $display['search_index']) {
            $label = $instances[$bundle][$field_name]['label'];
          }
        }

        if ($label) {
          $facets[$field_name] = $mappings[$field['type']] + array(
            'label' => check_plain($label),
            'field api name' => $field_name,
            'dependency plugins' => array('bundle', 'role'),
            'description' => t('Filter by field of type @type.', array('@type' => $field['type'])),
          );
        }

      }
    }
  }

  return $facets;
}

/**
 * Implements hook_search_facetapi_field_mappings().
 */
function field_search_facetapi_field_mappings() {
  $mappings = array(
    'number_integer' => array(
      'query types' => array('term', 'numeric_range'),
      'query type' => 'term',
      'facet mincount allowed' => TRUE,
    ),
    'number_decimal' => array(
      'query types' => array('term', 'numeric_range'),
      'query type' => 'term',
      'facet mincount allowed' => TRUE,
    ),
    'number_float' => array(
      'query types' => array('term', 'numeric_range'),
      'query type' => 'term',
      'facet mincount allowed' => TRUE,
    ),
  );

  return $mappings;
}

/**
 * Implements hook_search_facetapi_field_mappings().
 */
function taxonomy_search_facetapi_field_mappings() {
  $mappings = array(
    'taxonomy_term_reference' => array(
      'map callback' => 'facetapi_map_taxonomy_terms',
      'query type' => 'term',
      'facet mincount allowed' => TRUE,
    ),
  );

  return $mappings;
}
