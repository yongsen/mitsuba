FILE(REMOVE_RECURSE
  "CMakeFiles/mtsutil_pch"
  "mtsutil_pch/./mitsuba_precompiled.hpp.gch"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/mtsutil_pch.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
