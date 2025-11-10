#pragma once
#include "component/component.h"
#include "transform3d.h"
#include <vector>
#include <string>
#include <../../util/util.h>

namespace Maple
{
    class GameObject
    {
        private:
        std::vector<Component*> components;
        std::vector<GameObject*> children;
        
        public:

        std::string Name;
        void* Parent = nullptr;


        std::vector<Component*>& GetComponents();
        std::vector<GameObject*>& GetChildren();

        Component* AddComponent(Component*);
        GameObject* AddChild(GameObject*);

        void RemoveComponent(Component*);
        void RemoveChild(GameObject*);

        void Destroy();

        
        GameObject();
        ~GameObject();
    };
};