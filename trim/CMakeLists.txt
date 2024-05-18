file(
    GLOB
    SRCS
    ./sim/*.cxx
    ./pars/*.cxx
    ./calibration/*.cxx)

# fill list of header files from list of source files
# by exchanging the file extension
change_file_extension(*.cxx *.h HEADERS "${SRCS}")

add_library_with_dictionary(
    LIBNAME
    R3BSofTrim
    LINKDEF
    SofTrimLinkDef.h
    HEADERS
    ${HEADERS}
    SRCS
    ${SRCS}
    INCLUDEDIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
    sim
    pars
    calibration
    DEPENDENCIES
    R3BSofTcal
    R3BTracking)
