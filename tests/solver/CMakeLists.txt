#
# CMakeLists.txt - CMake configuration file for tests/solver
#


add_executable(test_demand_data
    ./test_demand_data.cpp
    ../../solver/demand.c
    ../../solver/list.c
    )
target_include_directories(test_demand_data
    PUBLIC
        ../../solver/
    )
target_link_libraries(test_demand_data ${Boost_LIBRARIES} epanet2)


add_executable(test_list
    ./test_list.cpp
    ../../solver/list.c
    )
target_include_directories(test_list
    PUBLIC
        ../../solver/
    )
target_link_libraries(test_list ${Boost_LIBRARIES})


set_target_properties(test_demand_data test_list
    PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
    )
