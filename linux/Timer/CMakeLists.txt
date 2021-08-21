cmake_minimum_required(VERSION 3.0.0)
project (Timer)

FIND_PACKAGE( Boost 1.65.1 COMPONENTS timer system REQUIRED )
#INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

add_executable(Timer main.cpp)

TARGET_LINK_LIBRARIES( Timer LINK_PUBLIC ${Boost_LIBRARIES} )



