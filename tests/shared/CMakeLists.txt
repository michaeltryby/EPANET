#
# CMakeLists.txt - CMake configuration file for tests/shared
#


add_executable(test_cstrhelper
    test_cstrhelper.cpp
    $<TARGET_OBJECTS:shared_objs>
    )

target_include_directories(test_cstrhelper
    PUBLIC
        ${Boost_INCLUDE_DIRS}
    PRIVATE
        ${CMAKE_SOURCE_DIR}/
    )

target_link_libraries(test_cstrhelper
    ${Boost_LIBRARIES}
    )


add_executable(test_errormanager
    test_errormanager.cpp
    $<TARGET_OBJECTS:shared_objs>
    )

target_include_directories(test_errormanager
    PRIVATE
        ${CMAKE_SOURCE_DIR}/
    )

target_link_libraries(test_errormanager
    ${Boost_LIBRARIES}
    )


add_executable(test_filemanager
    test_filemanager.cpp
    $<TARGET_OBJECTS:shared_objs>
    )

target_include_directories(test_filemanager
    PRIVATE
        ${CMAKE_SOURCE_DIR}/
    )

target_link_libraries(test_filemanager
    ${Boost_LIBRARIES}
    )


set_target_properties(test_cstrhelper test_errormanager test_filemanager
    PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
