FILE(REMOVE_RECURSE
  "CMakeFiles/scene_schema"
  "../../binaries/./data/schema/scene.xsd"
  "../../binaries/./data/schema/upgrade_0.3.0.xsl"
  "../../binaries/./data/schema/upgrade_0.4.0.xsl"
  "../../binaries/./data/schema/upgrade_0.5.0.xsl"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/scene_schema.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
