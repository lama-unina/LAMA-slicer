//
// Created by Salvatore Bramante on 25/07/22.
//

#ifndef LINE_H
#define LINE_H

#include "Point.h"

namespace Lamalib::Mesh::Geometry{
    class Line{
    private:
        Point vertices[2];
    public:
        Line(Point a, Point b);

        ~Line() = default;

        Point planeIntersection(double z);

        double length();

        Point midpoint();

    };
}

#endif
