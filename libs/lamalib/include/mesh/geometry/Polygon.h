//
// Created by Salvatore Bramante on 25/07/22.
//

#ifndef POLYGON_H
#define POLYGON_H

#include "Multipoint.h"

namespace Lamalib::Mesh::Geometry {
    class Polygon : Multipoint{
    public:
        Polygon();
        void rotate();
        void scale();
        void translate();
        void reverse() ;
    };
}
#endif
