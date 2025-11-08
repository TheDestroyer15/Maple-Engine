#pragma once
#include "window.h"

namespace Maple
{
  class App{
    private:
        Window* window;
    public:

        App();
        ~App();
    
        void Run();

  }; 
}; 