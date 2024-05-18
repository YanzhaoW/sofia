file(GLOB SRCS *.cxx)

set(STRUCT_HEADERS
    ext/ext_h101_wrsofia.h
    ext/ext_h101_sofsci.h
    ext/ext_h101_softofw.h
    ext/ext_h101_softrim.h
    ext/ext_h101_sofscalers.h
    ext/ext_h101_sofat.h
    ext/ext_h101_sofcorrm.h
    ext/ext_h101_sofcorrv.h)

# fill list of header files from list of source files
# by exchanging the file extension
change_file_extension(*.cxx *.h HEADERS "${SRCS}")

add_library_with_dictionary(
    LIBNAME
    R3BSofsource
    LINKDEF
    SofSourceLinkDef.h
    HEADERS
    ${HEADERS}
    ${STRUCT_HEADERS}
    SRCS
    ${SRCS}
    INCLUDEDIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
    ext
    DEPENDENCIES
    R3BSource
    R3BSofData)
