//
// Created by Salvatore Bramante on 25/07/22.
//

#ifndef MESHSLICER_H
#define MESHSLICER_H

#include "../mesh/TriangleMesh.h"

namespace Lamalib::Slicer{
    using Lamalib::Mesh::TriangleMesh;
    class MeshSlicer{
    private:
        TriangleMesh* toSlice;
    public:
        MeshSlicer(TriangleMesh* m);
        ~MeshSlicer();

        void slice() const;

        void cut(TriangleMesh* upperSide, TriangleMesh* lowerSide, float cutHeight) const;

    };

}

#endif
