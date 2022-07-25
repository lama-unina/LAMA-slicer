//
// Created by Salvatore Bramante on 25/07/22.
//
#include "Line.h"
#include <cmath>

namespace Lamalib::Mesh::Geometry{
    Line::Line(Point a, Point b) {
        vertices[0] = a;
        vertices[1] = b;
    }

    Point Line::planeIntersection(double z) {
        return Point(
                vertices[0].x + (vertices[1].x - vertices[0].x)*(z - vertices[0].z) /(vertices[1].z - vertices[0].z),
                vertices[0].y + (vertices[1].y - vertices[0].y)*(z - vertices[0].z) /(vertices[1].z - vertices[0].z),
                z
        );
    }

    double Line::length() {
        return sqrt(
                    pow(vertices[1].x - vertices[0].x,2) +
                    pow(vertices[1].y - vertices[0].y,2) +
                    pow(vertices[1].z - vertices[0].z,2)
                    );
    }

    Point Line::midpoint() {
        return Point(
                    (vertices[1].x + vertices[0].x)/2,
                    (vertices[1].y + vertices[0].y)/2,
                    (vertices[1].z + vertices[0].z)/2
                    );
    }
}

