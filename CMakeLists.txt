cmake_minimum_required(VERSION 3.25)

project(modularMinQml
    VERSION 1.0.0
    LANGUAGES CXX
)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Quick Qml)
qt_standard_project_setup(REQUIRES 6.5)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(QT_QML_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/qml" CACHE PATH "Install path for QML" FORCE)
set(QML_IMPORT_PATH ${CMAKE_BINARY_DIR}/qml CACHE STRING "Extra QML Import Paths" FORCE)

add_subdirectory(main)
add_subdirectory(view)
