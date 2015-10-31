FILE(REMOVE_RECURSE
  "CMakeFiles/mlt_pch"
  "mlt_pch/./mitsuba_precompiled.hpp.gch"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/mlt_pch.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
