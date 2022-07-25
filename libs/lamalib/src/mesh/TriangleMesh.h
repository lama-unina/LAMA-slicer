//
// Created by Salvatore Bramante on 25/07/22.
//

#ifndef TRIANGLEMESH_H
#define TRIANGLEMESH_H

#include "geometry/Polygon.h"
#include "admesh/stl.h"

namespace Lamalib::Mesh{

    class TriangleMesh{
    private:
        static constexpr auto numOfLines = 3;
        Geometry::Polygon* triangle;
        stl_file stl;
    public:
        explicit TriangleMesh( Geometry::Point* verts );
        ~TriangleMesh();

        void mirrorOnX();
        void mirrorOnY();
        void mirrorOnZ();
        void allign(Geometry::Point& p);     //allign the mesh on specific point in the space

        void rotate(Geometry::Point& p, double angle); //rotate the mesh around a point (usually the center)

        Geometry::Point* getVertices();      //get vertices of the triangle mesh

    };

}

#endif
