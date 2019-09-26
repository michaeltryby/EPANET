



add_executable(test_list ./test_list.cpp
                         ../../solver/list.c)
target_include_directories(test_list PUBLIC ../../solver/)
target_link_libraries(test_list ${Boost_LIBRARIES})


set_target_properties(test_list
    PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
    )
