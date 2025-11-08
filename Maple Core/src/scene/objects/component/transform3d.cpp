#include "transform3d.h"


namespace Maple{
    Transform3D::Transform3D() : position(0.0f, 0.0f, 0.0f), rotation(0.0f, 0.0f, 0.0f), scale(1.0f, 1.0f, 1.0f) {}

    Transform3D::~Transform3D() {}
};