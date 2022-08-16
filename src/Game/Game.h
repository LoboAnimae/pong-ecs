//
// Created by yagdrassyl on 8/15/22.
//

#ifndef PONGPROJECT_GAME_H
#define PONGPROJECT_GAME_H
#include <SDL2/SDL.h>

class Game {
public:
    Game();
    bool isRunning = true;
    void setup();
    void init();
    void runMainLoop();
    void handleEvents();
    void update();
    void render();
    void tick() const;

    SDL_Rect paddles[2];
    SDL_Rect ball;

    SDL_Window* window;
    SDL_Renderer* renderer;
    double* deltaTime;
    Uint32* lastTick;
};


#endif //PONGPROJECT_GAME_H
