file(REMOVE_RECURSE
  "libParkingLotLibrary.pdb"
  "libParkingLotLibrary.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/ParkingLotLibrary.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
