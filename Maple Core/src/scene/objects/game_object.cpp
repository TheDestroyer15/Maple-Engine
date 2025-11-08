#include "game_object.h"

namespace Maple{
    GameObject::GameObject() {
        this->Name = "Game Object";
        Transform3D* transform = new Transform3D();
        AddComponent(transform);
    }

    Component* GameObject::AddComponent(Component* component) {
        this->components.push_back(component);
        return component;
    }

    GameObject* GameObject::AddChild(GameObject* child) {
        children.push_back(child);
        child->Parent = this;
        return child;
    }

    void GameObject::RemoveComponent(Component* component) {
        components.erase(std::remove(components.begin(), components.end(), component), components.end());
    }

    void GameObject::RemoveChild(GameObject* child) {
        children.erase(std::remove(children.begin(), children.end(), child), children.end());
        child->Parent = nullptr;
    }

    void GameObject::Destroy() {
        delete this;
    }

    GameObject::~GameObject() {
        for (Component* component : components) {
            delete component;
        }
        components.clear();

        for (GameObject* child : children) {
            delete child;
        }
        children.clear();
    }
}