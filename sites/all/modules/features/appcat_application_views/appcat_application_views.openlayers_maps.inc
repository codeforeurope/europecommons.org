<?php
/**
 * @file
 * appcat_application_views.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function appcat_application_views_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'application_deployments';
  $openlayers_maps->title = 'application deployments';
  $openlayers_maps->description = 'The deployments map for the Applications listing page';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '550px',
    'image_path' => 'profiles/opencivic/openlayers_theme/img/',
    'css_path' => 'profiles/opencivic/openlayers_theme/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '7.023925,53.719961',
        'zoom' => '4',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'deployments_map_openlayers_1' => 'deployments_map_openlayers_1',
        ),
        'distance' => '20',
        'threshold' => '',
        'display_cluster_numbers' => 1,
        'middle_lower_bound' => '15',
        'middle_upper_bound' => '50',
        'low_color' => 'rgb(141, 203, 61)',
        'middle_color' => 'rgb(49, 190, 145)',
        'high_color' => 'rgb(35, 59, 177)',
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'deployments_map_openlayers_1' => 'deployments_map_openlayers_1',
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'deployments_map_openlayers_1' => 'deployments_map_openlayers_1',
    ),
    'layer_weight' => array(
      'organizations_map_openlayers_orgs' => '0',
      'organization_map_openlayers_org' => '0',
      'deployments_map_openlayers_1' => '0',
      'app_deployments_map_openlayers_1' => '0',
      'deployments_list_openlayers_deployments' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'home_page_map_homepage' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'home_page_map_homepage' => '0',
      'deployments_list_openlayers_deployments' => '0',
      'app_deployments_map_openlayers_1' => '0',
      'organizations_map_openlayers_orgs' => '0',
      'organization_map_openlayers_org' => '0',
      'deployments_map_openlayers_1' => 'deployment_marker',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'home_page_map_homepage' => '0',
      'deployments_list_openlayers_deployments' => '0',
      'app_deployments_map_openlayers_1' => '0',
      'organizations_map_openlayers_orgs' => '0',
      'organization_map_openlayers_org' => '0',
      'deployments_map_openlayers_1' => 'deployment_marker',
    ),
    'layer_activated' => array(
      'deployments_map_openlayers_1' => 'deployments_map_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'home_page_map_homepage' => 0,
      'deployments_list_openlayers_deployments' => 0,
      'app_deployments_map_openlayers_1' => 0,
      'organizations_map_openlayers_orgs' => 0,
      'organization_map_openlayers_org' => 0,
    ),
    'layer_switcher' => array(
      'deployments_map_openlayers_1' => 'deployments_map_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'home_page_map_homepage' => 0,
      'deployments_list_openlayers_deployments' => 0,
      'app_deployments_map_openlayers_1' => 0,
      'organizations_map_openlayers_orgs' => 0,
      'organization_map_openlayers_org' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['application_deployments'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'clone_of_application_deployments';
  $openlayers_maps->title = 'single app deployments';
  $openlayers_maps->description = 'The deployments map for the Applications details page';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '550px',
    'image_path' => 'profiles/opencivic/openlayers_theme/img/',
    'css_path' => 'profiles/opencivic/openlayers_theme/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '7.023925,53.719961',
        'zoom' => '4',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'app_deployments_map_openlayers_1' => 0,
        ),
        'distance' => '20',
        'threshold' => '',
        'display_cluster_numbers' => 1,
        'middle_lower_bound' => '15',
        'middle_upper_bound' => '50',
        'low_color' => 'rgb(141, 203, 61)',
        'middle_color' => 'rgb(49, 190, 145)',
        'high_color' => 'rgb(35, 59, 177)',
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'app_deployments_map_openlayers_1' => 'app_deployments_map_openlayers_1',
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'app_deployments_map_openlayers_1' => 'app_deployments_map_openlayers_1',
    ),
    'layer_weight' => array(
      'organizations_map_openlayers_orgs' => '0',
      'organization_map_openlayers_org' => '0',
      'app_deployments_map_openlayers_1' => '0',
      'deployments_map_openlayers_1' => '0',
      'deployments_list_openlayers_deployments' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'home_page_map_homepage' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'home_page_map_homepage' => '0',
      'deployments_list_openlayers_deployments' => '0',
      'deployments_map_openlayers_1' => 'deployment_marker',
      'organizations_map_openlayers_orgs' => '0',
      'organization_map_openlayers_org' => '0',
      'app_deployments_map_openlayers_1' => 'deployment_marker',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'home_page_map_homepage' => '0',
      'deployments_list_openlayers_deployments' => '0',
      'deployments_map_openlayers_1' => 'deployment_marker',
      'organizations_map_openlayers_orgs' => '0',
      'organization_map_openlayers_org' => '0',
      'app_deployments_map_openlayers_1' => 'deployment_marker',
    ),
    'layer_activated' => array(
      'app_deployments_map_openlayers_1' => 'app_deployments_map_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'home_page_map_homepage' => 0,
      'deployments_list_openlayers_deployments' => 0,
      'deployments_map_openlayers_1' => 0,
      'organizations_map_openlayers_orgs' => 0,
      'organization_map_openlayers_org' => 0,
    ),
    'layer_switcher' => array(
      'app_deployments_map_openlayers_1' => 'app_deployments_map_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'home_page_map_homepage' => 0,
      'deployments_list_openlayers_deployments' => 0,
      'deployments_map_openlayers_1' => 0,
      'organizations_map_openlayers_orgs' => 0,
      'organization_map_openlayers_org' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['clone_of_application_deployments'] = $openlayers_maps;

  return $export;
}
