add_executable(${PROJECT_NAME}Executable main.cpp)
set_target_properties(${PROJECT_NAME}Executable PROPERTIES
        CXX_STANDARD 14
        )
install(TARGETS ${PROJECT_NAME}Executable EXPORT ${PROJECT_NAME}Targets
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        )
target_link_libraries(${PROJECT_NAME}Executable ${PROJECT_NAME}library)