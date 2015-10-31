FILE(REMOVE_RECURSE
  "CMakeFiles/ptracer_pch"
  "ptracer_pch/./mitsuba_precompiled.hpp.gch"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ptracer_pch.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
