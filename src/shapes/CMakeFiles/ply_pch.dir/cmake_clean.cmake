FILE(REMOVE_RECURSE
  "CMakeFiles/ply_pch"
  "ply_pch/./mitsuba_precompiled.hpp.gch"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ply_pch.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
