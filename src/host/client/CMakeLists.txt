make_executable()

target_include_directories(${PROJECT}
    PRIVATE ${PROTOBUF_INCLUDE_DIRS} ${Boost_INCLUDE_DIR} ${GeneratedRpc_INCLUDE_DIR} ${GEN_DIR}/messages)
target_link_libraries(${PROJECT} PUBLIC ${PROTOBUF_LIBRARIES} GeneratedRpc)


