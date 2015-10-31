FILE(REMOVE_RECURSE
  "CMakeFiles/microfacet_data"
  "../../binaries/./data/microfacet/beckmann.dat"
  "../../binaries/./data/microfacet/ggx.dat"
  "../../binaries/./data/microfacet/phong.dat"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/microfacet_data.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
