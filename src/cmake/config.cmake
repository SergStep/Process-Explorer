
if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build, options are: Debug Release" FORCE)
endif ()

set(ROOT "${CMAKE_SOURCE_DIR}/..")
set(OBJ_DIR "${ROOT}/obj/${CMAKE_BUILD_TYPE}")
set(LIB_DIR "${ROOT}/lib/${CMAKE_BUILD_TYPE}")
set(BIN_DIR "${ROOT}/bin/${CMAKE_BUILD_TYPE}")
set(TEST_DIR "${ROOT}/tests/${CMAKE_BUILD_TYPE}")
set(GEN_DIR "${ROOT}/gen/${CMAKE_BUILD_TYPE}")
set(INSTALL_DIR "${ROOT}/install/${CMAKE_BUILD_TYPE}")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${LIB_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${LIB_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BIN_DIR}")

macro(make_project_)
    if (NOT DEFINED PROJECT)
        get_filename_component(PROJECT ${CMAKE_CURRENT_SOURCE_DIR} NAME)
    endif ()

    project(${PROJECT})

    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

    if (NOT DEFINED HEADERS)
        file(GLOB HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.h)
    endif ()

    if (NOT DEFINED SOURCES)
        file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
    endif ()

    source_group("Header Files" FILES ${HEADERS})
    source_group("Source Files" FILES ${SOURCES})
endmacro()

macro(make_library)
    make_project_()
    add_library(${PROJECT} STATIC ${HEADERS} ${SOURCES})
    target_include_directories(${PROJECT} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

    if (NOT SOURCES)
        set_target_properties(${PROJECT} PROPERTIES LINKER_LANGUAGE CXX)
    endif ()
endmacro()

macro(make_executable)
    make_project_()
    add_executable(${PROJECT} ${HEADERS} ${SOURCES})
endmacro()

macro(make_qt_executable)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS}")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
    set(CMAKE_AUTOMOC ON)
    set(CMAKE_AUTORCC ON)
    set(CMAKE_AUTOUIC ON)
    IF(CMAKE_BUILD_TYPE MATCHES Debug)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DQT_QML_DEBUG -DQT_DECLARATIVE_DEBUG")
    ENDIF()
    make_project_()
    add_executable(${PROJECT} ${HEADERS} ${SOURCES} ${QT_RESOURCES})
endmacro()

macro(make_test)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${TEST_DIR}")
    make_executable()

    target_include_directories(${PROJECT} PRIVATE ${GMOCK_INCLUDE_DIRS})
    target_link_libraries(${PROJECT} PRIVATE ${GMOCK_MAIN_LIBRARIES})

    add_test(NAME ${PROJECT}
        COMMAND ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PROJECT} ${XML_TEST_RESULT_ARG}
        WORKING_DIRECTORY ${ROOT})

endmacro()

function(add_all_subdirectories)
    file(GLOB CHILDREN RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/*)

    foreach (CHILD ${CHILDREN})
        if (IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${CHILD})
            add_subdirectory(${CHILD})
        endif ()
    endforeach ()
endfunction()

