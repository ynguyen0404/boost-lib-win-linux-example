cmake_minimum_required(VERSION 3.0.0)
project (uart)

FIND_PACKAGE( Boost 1.65.1 COMPONENTS system REQUIRED )
#INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

add_executable(uart main.cpp)

TARGET_LINK_LIBRARIES( uart LINK_PUBLIC ${Boost_LIBRARIES} )



