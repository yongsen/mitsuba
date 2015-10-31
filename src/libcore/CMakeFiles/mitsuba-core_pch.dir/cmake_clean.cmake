FILE(REMOVE_RECURSE
  "CMakeFiles/mitsuba-core_pch"
  "mitsuba-core_pch/./mitsuba_precompiled.hpp.gch"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/mitsuba-core_pch.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
