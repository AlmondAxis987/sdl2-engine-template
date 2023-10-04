#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

#include "sprite.hpp"

#ifndef GAME
#define GAME

// Declaration of Game Structure (defined in game.cpp)
struct Game{
    Game();
    ~Game();
    void run();

    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Event event;
    bool done;

    // In-Game functions (defined in functions1.cpp, functions2.cpp)
    void draw();
    void update();
    void load();
    void events(SDL_Event _event);

    // Local Declarations (Sprites, Textures, etc)
    Sprite box1;
    Sprite box2;
};

#endif