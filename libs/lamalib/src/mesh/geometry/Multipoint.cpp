//
// Created by Salvatore Bramante on 25/07/22.
//
#include "Multipoint.h"

namespace Lamalib::Mesh::Geometry{

    Multipoint::Multipoint(int n) {
        numberOfLines = n;
        points = new Point[numberOfLines];
    }

    Multipoint::~Multipoint() {
        delete [] points;
    }
}