#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

#ifndef SPRITE
#define SPRITE

// Declaration of Sprite Structure (defined in sprite.cpp)
struct Sprite
{
    Sprite();
    void draw(SDL_Renderer* renderer);
    float ctop();
    float cbottom();
    float cleft();
    float cright();
    bool CheckCollisionAABB(Sprite target);
    bool CheckPushingAABB(Sprite target);

    SDL_FRect body;
    SDL_FRect collider;
    SDL_FPoint vel;
    SDL_Color color;
    bool HideBody;
    bool FillBody;
    bool AnchorCentered;
    bool ColliderIsBody;
    SDL_Texture* texture;
    SDL_FPoint center;
    double angle;
    SDL_RendererFlip flip;
};

#endif