//
// Created by yagdrassyl on 8/15/22.
//

#include "Game.h"
#include <SDL2/SDL.h>

Game::Game() {
    // Allocate the variables in the heap
    deltaTime = new double(0.0f);
    lastTick = new Uint32(0.0f);
};

void Game::tick() const {
    Uint32 currentTicks = SDL_GetTicks();
    *deltaTime = (double)(currentTicks - *lastTick) / 1000.0f;
    *lastTick = currentTicks;
}

void Game::runMainLoop() {
    handleEvents();
    update();
    render();
    tick();
}

void Game::handleEvents() {
    SDL_Event event;

    while (SDL_PollEvent(&event)) {
    printf("Hello");
        switch (event.type) {
            case SDL_QUIT: {
                isRunning = false;

            } break;

            default: {}
                break;
            
        }
    }

}

void Game::setup() {
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderClear(renderer);
}

void Game::init() {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        SDL_Quit();
        printf("Error");
        exit(1);
    }
    window = SDL_CreateWindow("My Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, 0);

    if (!window) {
        printf("Error");
        exit(1);
    }

    renderer = SDL_CreateRenderer(window, -1, 0);

    if (!renderer) {
        printf("Error");
        exit(1);
    }

}

void Game::update() {

}

void Game::render() {

}
