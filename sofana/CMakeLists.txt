set(SRCS
    #Put here your sourcefiles
    R3BSofFrsAnalysis.cxx
    R3BSofFragmentAnalysis.cxx
    R3BSofFissionAnalysis.cxx
    R3BSofFrsAnaPar.cxx
    R3BSofFragmentAnaPar.cxx
    R3BSofGladFieldPar.cxx
    R3BSofAnaContFact.cxx)

set(HEADERS
    #Put here your sourcefiles
    R3BSofFrsAnalysis.h
    R3BSofFragmentAnalysis.h
    R3BSofFissionAnalysis.h
    R3BSofFrsAnaPar.h
    R3BSofFragmentAnaPar.h
    R3BSofGladFieldPar.h
    R3BSofAnaContFact.h)

add_library_with_dictionary(
    LIBNAME
    R3BSofAna
    LINKDEF
    SofAnaLinkDef.h
    HEADERS
    ${HEADERS}
    SRCS
    ${SRCS}
    INCLUDEDIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
    DEPENDENCIES
    R3BSofData
    R3BMusic
    R3BTwim
    R3BTracking
    R3BNeulandShared)
