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

add_subdirectory(libs)

add_executable(LAMA-slicer src/main.cpp libs/lamalib/src/mesh/admesh/admesh.c
        libs/lamalib/src/mesh/admesh/connect.c
        libs/lamalib/src/mesh/admesh/normals.c
        libs/lamalib/src/mesh/admesh/portable_endian.h
        libs/lamalib/src/mesh/admesh/shared.c
        libs/lamalib/src/mesh/admesh/stl.h
        libs/lamalib/src/mesh/admesh/stl_io.c
        libs/lamalib/src/mesh/admesh/stlinit.c
        libs/lamalib/src/mesh/admesh/util.c
                                    libs/lamalib/lamalib.h
                                    libs/lamalib/src/mesh/TriangleMesh.h
                                    libs/lamalib/src/slicer/MeshSlicer.h
                                    libs/lamalib/src/parser/StlPaser.h
                                    libs/lamalib/src/mesh/geometry/Point.h
                                    libs/lamalib/src/mesh/geometry/Line.h
                                    libs/lamalib/src/mesh/geometry/Multipoint.h
                                    libs/lamalib/src/mesh/geometry/Polygon.h
        libs/lamalib/src/mesh/geometry/Line.cpp libs/lamalib/src/mesh/geometry/Polygon.cpp libs/lamalib/src/mesh/geometry/Multipoint.cpp libs/lamalib/src/mesh/TriangleMesh.cpp libs/lamalib/test/test.cpp)

target_link_libraries(LAMA-slicer PRIVATE
        Qt6::Core
        Qt::Gui
        Qt::Widgets
        Lamalib)