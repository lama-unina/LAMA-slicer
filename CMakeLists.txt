cmake_minimum_required(VERSION 3.16)

project(LAMA-slicer VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 REQUIRED COMPONENTS
        Core
        Gui
        Widgets)

qt_standard_project_setup()

add_executable(LAMA-slicer main.cpp )

target_link_libraries(LAMA-slicer PRIVATE
        Qt6::Core
        Qt::Gui
        Qt::Widgets)