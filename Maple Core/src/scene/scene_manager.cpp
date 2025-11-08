#include "scene_manager.h"


namespace Maple{
    SceneManager::SceneManager(Scene& scene) : currentScene(&scene) {}

    SceneManager::~SceneManager() {}

    Scene& SceneManager::GetCurrentScene() {
        return *currentScene;
    }

    void SceneManager::LoadScene(Scene& scene) {
        currentScene = &scene;
    }
}