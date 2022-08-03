cmake_minimum_required(VERSION 3.23)
project("C_Primer_Plus_Source_Code09")

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_BUILD_TYPE Debug)

#include_directories("Chapter 10")
#include_directories("Chapter 11")
#include_directories("Chapter 12")
#include_directories("Chapter 13")
#include_directories("Chapter 14")
#include_directories("Chapter 15")
#include_directories("Chapter 18")
#include_directories(Chapter09)

add_executable("file1and2"

        #autoscp.cpp
        #coordin.h
        #external.cpp
        file1.cpp
        file2.cpp
#        namesp.cpp
        #namesp.h
        #newer.h
        #newplace.cpp
        #static.cpp
        #support.cpp

        #usenmsp.cpp)
        )
add_executable("twofile1and2"
        twofile1.cpp
        twofile2.cpp
)

add_executable("externalAndsupport"

        #autoscp.cpp
        #coordin.h
        external.cpp
#        file1.cpp
#        file2.cpp
        #        namesp.cpp
        #namesp.h
        #newer.h
        #newplace.cpp
        #static.cpp
        support.cpp

        #usenmsp.cpp)
        )

add_executable("static"

        #autoscp.cpp
        #coordin.h
        #external.cpp
#        file1.cpp
#        file2.cpp
        #        namesp.cpp
        #namesp.h
        #newer.h
        #newplace.cpp
        static.cpp
        #support.cpp

        #usenmsp.cpp)
        )

add_executable("newplace"

        #autoscp.cpp
        #coordin.h
        #external.cpp
        #        file1.cpp
        #        file2.cpp
        #        namesp.cpp
        #namesp.h
        #newer.h
        newplace.cpp
#        static.cpp
#        support.cpp

        #usenmsp.cpp)
        )

add_executable("namespace"

        #autoscp.cpp
        #coordin.h
        #external.cpp
        #        file1.cpp
        #        file2.cpp
        #        namesp.cpp
        #namesp.h
        #newer.h
#        newplace.cpp
        #        static.cpp
        #        support.cpp

        usenmsp.cpp
        namesp.cpp
        )


#add_dependencies(/Chapter 10/stock00.h)