#
# CMakeLists.txt - CMake configuration file for tests/outfile
#


add_executable(test_output
    test_output.cpp
    )
target_include_directories(test_output
    PUBLIC ../../src/outfile/include
    )
target_link_libraries(test_output
    ${Boost_LIBRARIES}
    epanet-output
    )

set_target_properties(test_output
    PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
