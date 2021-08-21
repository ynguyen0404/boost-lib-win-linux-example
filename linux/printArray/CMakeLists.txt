cmake_minimum_required(VERSION 3.0.0)
project (PrintArray)

FIND_PACKAGE( Boost 1.65.1 COMPONENTS system REQUIRED )
#INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

add_executable(PrintArray printArray.cpp)

TARGET_LINK_LIBRARIES( PrintArray LINK_PUBLIC ${Boost_LIBRARIES} )



