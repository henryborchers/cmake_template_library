add_library(${PROJECT_NAME}library
        sayhello.cpp
        sayhello.h
        mylibrary.h
        )
set_target_properties(${PROJECT_NAME}library PROPERTIES
        PUBLIC_HEADER "mylibrary.h;sayhello.h"
        )
target_include_directories(${PROJECT_NAME}library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS ${PROJECT_NAME}library EXPORT ${PROJECT_NAME}Targets
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        PUBLIC_HEADER DESTINATION include/${PROJECT_NAME}
        )