cmake_minimum_required(VERSION 3.23)
project("C_Primer_Plus_Source_Code10")

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

add_executable("stack"
        stack.cpp
#        stack.h
        stacker.cpp
#        stock00.cpp
##        stock00.h
#        stock01.cpp
#        stock10.cpp
##        stock10.h
#        stock20.cpp
##        stock20.h
#        stocks.cpp
#        temp20.cpp
#        usestok0.cpp
#        usestok1.cpp
#        usestok2.cpp

        )

add_executable("stock0"
#        stack.cpp
        #        stack.h
#        stacker.cpp
                stock00.cpp
        ##        stock00.h
#                stock01.cpp
#                stock10.cpp
        ##        stock10.h
#                stock20.cpp
        ##        stock20.h
#                stocks.cpp
        #        temp20.cpp
                usestok0.cpp
        #        usestok1.cpp
        #        usestok2.cpp

        )

add_executable("stock"
        #        stack.cpp
        #        stack.h
        #        stacker.cpp
#        stock00.cpp
        ##        stock00.h
        #                stock01.cpp
        #                stock10.cpp
        ##        stock10.h
        #                stock20.cpp
        ##        stock20.h
                        stocks.cpp
        #        temp20.cpp
#        usestok0.cpp
        #        usestok1.cpp
        #        usestok2.cpp

        )