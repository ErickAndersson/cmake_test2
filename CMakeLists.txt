cmake_minimum_required(VERSION 3.10)

project(CMAKE_TEST2 VERSION 1.0)

# Header file for CMake settings.
configure_file(CMAKE_TEST2Config.h.in CMAKE_TEST2Config.h)

# Adding the libraries folders.
add_subdirectory(include/Date)
add_subdirectory(include/Queue)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
    PUBLIC Date
    PUBLIC Queue
    )

target_include_directories(${PROJECT_NAME} PUBLIC 
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/include/Date"
    "${PROJECT_SOURCE_DIR}/include/Queue"
    )