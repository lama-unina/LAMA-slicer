//
// Created by Salvatore Bramante on 25/07/22.
//

#ifndef POINT_H
#define POINT_H
namespace Lamalib::Mesh::Geometry{
    class Point{
    private:
        double x;
        double y;
        double z;
    public:
        Point(double x=0, double y=0, double z=0); //default point : origin
        ~Point();
    };
}
#endif