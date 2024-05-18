file(
    GLOB
    SRCS
    ./sim/*.cxx
    ./digi/*.cxx
    ./pars/*.cxx
    ./calibration/*.cxx)

change_file_extension(*.cxx *.h HEADERS "${SRCS}")

add_library_with_dictionary(
    LIBNAME
    R3BSofTofW
    LINKDEF
    SofTofWLinkDef.h
    HEADERS
    ${HEADERS}
    SRCS
    ${SRCS}
    INCLUDEDIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
    sim
    digi
    pars
    calibration
    DEPENDENCIES
    R3BSofTcal
    R3BSofSci
    R3BTracking
    R3BNeulandShared)

if(BUILD_GEOMETRY)
    add_subdirectory(geobase)
endif()
add_subdirectory(test)
