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

add_executable(LAMA-slicer main.cpp libs/admesh/src/admesh.c
                                    libs/admesh/src/connect.c
                                    libs/admesh/src/normals.c
                                    libs/admesh/src/portable_endian.h
                                    libs/admesh/src/shared.c
                                    libs/admesh/src/stl.h
                                    libs/admesh/src/stl_io.c
                                    libs/admesh/src/stlinit.c
                                    libs/admesh/src/util.c
                                    libs/lamalib/lamalib.h
        libs/lamalib/src/mesh/TriangleMesh.h
        libs/lamalib/src/slicer/MeshSlicer.h
        libs/lamalib/src/parser/StlPaser.h
        libs/lamalib/src/mesh/geometry/Point.h
        libs/lamalib/src/mesh/geometry/Line.h libs/lamalib/src/mesh/geometry/Multipoint.h libs/lamalib/src/mesh/geometry/Polygon.h)

target_link_libraries(LAMA-slicer PRIVATE
        Qt6::Core
        Qt::Gui
        Qt::Widgets)