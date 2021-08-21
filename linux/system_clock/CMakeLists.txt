cmake_minimum_required(VERSION 3.0.0)
project (sysLock)

FIND_PACKAGE( Boost 1.65.1 COMPONENTS system chrono REQUIRED )
#INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

add_executable(sysLock main.cpp)

TARGET_LINK_LIBRARIES( sysLock LINK_PUBLIC ${Boost_LIBRARIES} )



