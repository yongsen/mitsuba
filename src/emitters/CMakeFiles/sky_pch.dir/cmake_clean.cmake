FILE(REMOVE_RECURSE
  "CMakeFiles/sky_pch"
  "sky_pch/./mitsuba_precompiled.hpp.gch"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/sky_pch.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
