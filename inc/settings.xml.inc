<!--
Settings for symbols, the spatial reference of your postgis tables, coastline shapefiles directory, and their prefix names.
-->

<!-- use 'symbols' unless you have moved the symbols directory -->
<!ENTITY symbols "symbols">

<!-- use the '&srs900913;' entity if you have called osm2pgsql without special flags (or with -m); use '&srs4326;' if you have used -l -->
<!ENTITY osm2pgsql_projection "&srs900913;">

<!-- use 'world_boundaries', which is the usual naming for the local folder the coastline shapefiles are unzipped into -->
<!ENTITY world_boundaries "world_boundaries">

<!-- use 'planet_osm' unless you have customized your database table prefix using the osm2pgsql 'prefix' flag -->
<!ENTITY prefix "planet_beosm">
