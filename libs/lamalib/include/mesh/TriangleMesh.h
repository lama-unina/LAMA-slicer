//
// Created by Salvatore Bramante on 25/07/22.
//

#ifndef TRIANGLEMESH_H
#define TRIANGLEMESH_H

#include "geometry/Polygon.h"

namespace Lamalib::Mesh{

    class TriangleMesh{
    private:
        Geometry::Polygon triangle;
    public:
        TriangleMesh();
        ~TriangleMesh();

        void mirrorOnX();
        void mirrorOnY();
        void mirrorOnZ();
        void allign(Geometry::Point& p);     //allign the mesh on specific point in the space

        void rotate(Geometry::Point& p, double angle); //rotate the mesh around a point (usually the center)

        Geometry::Point getVertices();      //get vertices of the triangle mesh

    };

}

#endif
