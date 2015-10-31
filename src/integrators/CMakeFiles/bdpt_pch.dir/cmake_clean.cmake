FILE(REMOVE_RECURSE
  "CMakeFiles/bdpt_pch"
  "bdpt_pch/./mitsuba_precompiled.hpp.gch"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/bdpt_pch.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
