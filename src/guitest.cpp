#include "headers.h"

GuiTest::GuiTest(){

}

int GuiTest::Start(int argc, char** argv){
    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow("ImGui Testing Site - Dexsidius", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, WINDOW_FLAGS);
    renderer = SDL_CreateRenderer(window, -1, RENDERER_FLAGS);


}

void GuiTest::Loop(){

}