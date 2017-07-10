# Add Catch header-only library test framework
add_library(Catch INTERFACE)
target_sources(Catch INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/catch.hpp)
target_include_directories(Catch INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

# Add Tests and link them to Catch
add_executable(test_myproject_library test_myproject_library.cpp)
target_link_libraries(test_myproject_library Catch)
target_link_libraries(test_myproject_library ${PROJECT_NAME}library)