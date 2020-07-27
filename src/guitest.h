#pragma once

#include "headers.h"

#ifndef imguitest_h
#define imguitest_h

class GuiTest{
    public:

    GuiTest();
    ~GuiTest();

    int Start(int argc, char** argv);
    void Loop();

    private:
    SDL_Window* window;
    SDL_Renderer* renderer;

    Uint32 WINDOW_FLAGS = SDL_WINDOW_SHOWN;
    Uint32 RENDERER_FLAGS = SDL_RENDERER_PRESENTVSYNC;

    int WIDTH = 640, HEIGHT = 480;
        
};

#endif /* imguitest_h */