cmake_minimum_required(VERSION 3.9)
project(myproject VERSION 0.0.1)

find_package(Doxygen)

option(${PROJECT_NAME}_Build_Documentation "Build Doxygen documentation" ${DOXYGEN_FOUND})

add_subdirectory(src)
add_subdirectory(tests)

if (${PROJECT_NAME}_Build_Documentation)
    doxygen_add_docs(${PROJECT_NAME}_docs
            src/
            COMMENT "Building ${PROJECT_NAME} documentation"
            )
else ()
    message(WARNING "NOT BUILDING")
endif ()