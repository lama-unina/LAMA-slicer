//
// Created by Salvatore Bramante on 25/07/22.
//
#include "TriangleMesh.h"

namespace Lamalib::Mesh{
    TriangleMesh::TriangleMesh( Geometry::Point* verts ) {
        triangle = new Geometry::Polygon(verts, numOfLines);
    }

    TriangleMesh::~TriangleMesh() {
        delete triangle;
    }

    void TriangleMesh::mirrorOnX() {
        stl_mirror_yz(&this->stl);
    }

    void TriangleMesh::mirrorOnY() {
        stl_mirror_xz(&this->stl);
    }

    void TriangleMesh::mirrorOnZ() {
        stl_mirror_xy(&this->stl);
    }

    void TriangleMesh::allign(Geometry::Point &p) {

    }

    void TriangleMesh::rotate(Geometry::Point &p, double angle) {

    }

    Geometry::Point* TriangleMesh::getVertices() {
        return triangle->getVertices();
    }
}