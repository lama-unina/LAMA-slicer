//
// Created by Salvatore Bramante on 25/07/22.
//

#ifndef MULTIPOINT_H
#define MULTIPOINT_H


#include <vector>
#include "Point.h"

namespace Lamalib::Mesh::Geometry{
    class Multipoint{
    protected:
        std::vector<Point> points;
    public:
        Multipoint();
        ~Multipoint();

        virtual void rotate() = 0;
        virtual void scale() = 0;
        virtual void translate() = 0;
        virtual void reverse() = 0;
    };
}

#endif
