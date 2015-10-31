FILE(REMOVE_RECURSE
  "CMakeFiles/sobol_pch"
  "sobol_pch/./mitsuba_precompiled.hpp.gch"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/sobol_pch.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
