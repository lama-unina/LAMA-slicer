//
// Created by Salvatore Bramante on 25/07/22.
//
#include "Polygon.h"

namespace Lamalib::Mesh::Geometry {
    Polygon::Polygon(Point* arr, int numOfLines) {
        for (int i  = 0; i < numOfLines; i++){
            points[i] = arr[i];
        }
    }

    void Polygon::rotate(double angle) {
        double sinAngle = sin(angle);   //radiant
        double cosAngle = cos(angle);   //radiant

        for(int i = 0; i<numberOfLines; i++){
            points[i].x = ( double ) round( cosAngle * points[i].x - sinAngle * points[i].y );
            points[i].y = ( double ) round( sinAngle * points[i].x + cosAngle * points[i].y );
            //z ???
        }
    }

    void Polygon::scale(double coeff) {
        for (int i = 0; i < numberOfLines; ++i) {
            points[i].x/=coeff;
            points[i].y/=coeff;
            points[i].z/=coeff;
        }
    }

    void Polygon::translate(const Point &p) {
        for (int i = 0; i < numberOfLines; ++i) {
            points[i].x+=p.x;
            points[i].y+=p.y;
            points[i].z+=p.z;
        }
    }

    void Polygon::unscale(double coeff) {
        for (int i = 0; i < numberOfLines; ++i) {
            points[i].x*=coeff;
            points[i].y*=coeff;
            points[i].z*=coeff;
        }
    }
}