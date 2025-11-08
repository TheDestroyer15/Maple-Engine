#pragma once
#include <src/util/util.h>
#include "raylib.h"

namespace Maple
{
  class Window{
    private:
        short width;
        short height;
        const char* title;

        bool isRunning;
    public:

        Window(short, short, const char*);
        ~Window();

        void Init();
        void Update();
        void Draw();
        void Shutdown();

  };
};