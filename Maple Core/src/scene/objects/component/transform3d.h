#pragma once
#include "component.h"
#include "../math/vector/vector3.h"


namespace Maple
{
    class Transform3D : public Component{    
        public:
        Vector3 position;
        Vector3 rotation;
        Vector3 scale;

        Transform3D();
        ~Transform3D();
    };
};
