include_directories(${PROJECT_SOURCE_DIR}/include)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

aux_source_directory(. CURRENT_DIR_SOURCE)
add_executable(ctest ${CURRENT_DIR_SOURCE})