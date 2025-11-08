#pragma once
#include "component.h"
#include <vector>

namespace Maple
{
    class GameObject
    {
        private:
        std::vector<Component*> components;
        std::vector<GameObject*> children;
        
        public:

        Component* AddComponent(Component* component);



        GameObject();
        ~GameObject();
    };
};