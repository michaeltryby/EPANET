#
# CMakeLists.txt - CMake configuration file for epanet/run
#


# Set up file groups for exe target
source_group("CLI" FILES main.c)


# Creates the EPANET command line executable
add_executable(runepanet
    main.c
    )
if(NOT WIN32)
    target_link_libraries(runepanet
        LINK_PUBLIC
            epanet2
            m
        )
else()
    target_link_libraries(runepanet
        LINK_PUBLIC
            epanet2
        )
endif()



install(TARGETS runepanet
    EXPORT epanet2Targets
    RUNTIME DESTINATION  "${TOOL_DIST}" COMPONENT bin)


# copy runepanet to build tree for testing
add_custom_command(TARGET runepanet POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:runepanet>
        ${CMAKE_BINARY_DIR}/bin/$<CONFIGURATION>/$<TARGET_FILE_NAME:runepanet>
    )
