//
// Created by Salvatore Bramante on 25/07/22.
//

#ifndef POLYGON_H
#define POLYGON_H

#include "Multipoint.h"

namespace Lamalib::Mesh::Geometry {

    class Polygon : Multipoint{
    public:
        explicit Polygon( int numOfLines = 3 ) : Multipoint(numOfLines){};        //basic Polygon as a triangle
        explicit Polygon( Point* arr, int numOfLines = 3 );
        void rotate( double angle ) override;
        void scale( double coeff ) override;
        void unscale( double coeff ) override;
        void translate( const Point& p ) override;
    };

}
#endif
