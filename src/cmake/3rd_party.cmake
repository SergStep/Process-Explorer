set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/cryptopp" "${CMAKE_SOURCE_DIR}/cmake/gtest")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake" "${CMAKE_SOURCE_DIR}/cmake/cryptopp" "${CMAKE_SOURCE_DIR}/cmake/gtest")
find_package(ZLIB REQUIRED)

include(cmake/grpc.cmake)

include(FindBoost)
set(Boost_USE_STATIC_LIBS ON)
find_package(Boost 1.58 REQUIRED COMPONENTS system filesystem thread program_options iostreams)



