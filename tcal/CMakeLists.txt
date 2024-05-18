set(SRCS R3BSofSciRawTofPar.cxx R3BSofTcalContFact.cxx R3BSofTcalPar.cxx R3BSofiaProvideTStart.cxx)

set(HEADERS R3BSofTcalContFact.h R3BSofSciRawTofPar.h R3BSofTcalPar.h R3BSofiaProvideTStart.h)

add_library_with_dictionary(
    LIBNAME
    R3BSofTcal
    LINKDEF
    SofTcalLinkDef.h
    HEADERS
    ${HEADERS}
    SRCS
    ${SRCS}
    INCLUDEDIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
    DEPENDENCIES
    R3BSofData
    R3BNeulandShared)
