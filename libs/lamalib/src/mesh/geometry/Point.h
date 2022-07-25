//
// Created by Salvatore Bramante on 25/07/22.
//

#ifndef POINT_H
#define POINT_H
namespace Lamalib::Mesh::Geometry{
    class Point{
    public:
        double x;
        double y;
        double z;
        explicit Point(double x=0, double y=0, double z=0): x(x), y(y),z(z){}; //default point : origin
        ~Point() = default;
    };
}
#endif