cmake_minimum_required(VERSION 3.0.0)
project (thread)

FIND_PACKAGE( Boost 1.65.1 COMPONENTS thread system REQUIRED )
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

add_executable(thread thread.cpp)

TARGET_LINK_LIBRARIES( thread LINK_PUBLIC ${Boost_LIBRARIES} )



