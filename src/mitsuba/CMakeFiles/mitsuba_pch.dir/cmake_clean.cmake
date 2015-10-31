FILE(REMOVE_RECURSE
  "CMakeFiles/mitsuba_pch"
  "mitsuba_pch/./mitsuba_precompiled.hpp.gch"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/mitsuba_pch.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
