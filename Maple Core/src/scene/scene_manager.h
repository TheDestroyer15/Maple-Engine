#pragma once
#include "scene.h"

namespace Maple{
    class SceneManager{
        private:

        Scene* currentScene;

        public:

        Scene& GetCurrentScene();
        void LoadScene(Scene&);

        SceneManager(Scene&);
        ~SceneManager();
    };
};