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
        int numberOfLines;
        Point* points;
    public:
        explicit Multipoint(int n = 3);
        ~Multipoint();

        virtual void rotate(double angle) = 0;
        virtual void scale(double coeff) = 0;
        virtual void unscale(double coeff) = 0;
        virtual void translate(const Point& p) = 0;
    };
}

#endif
