FILE(REMOVE_RECURSE
  "CMakeFiles/all_simulations"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/all_simulations.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
