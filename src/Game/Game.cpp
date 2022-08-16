//
// Created by yagdrassyl on 8/15/22.
//

#include "Game.h"
#include <SDL2/SDL.h>
#include <iostream>

struct Controls {
    SDL_Keycode up;
    SDL_Keycode down;
};

Controls player1 = Controls{.up = SDLK_UP, .down = SDLK_DOWN};
Controls player2 = Controls{.up = SDLK_w, .down = SDLK_s};

Game::Game() {
    // Allocate the variables in the heap
    deltaTime = new double(0.0f);
    lastTick = new Uint32(0.0f);
};

void Game::tick() const {
    Uint32 currentTicks = SDL_GetTicks();
    *deltaTime = (double) (currentTicks - *lastTick) / 1000.0f;
    *lastTick = currentTicks;
}

void Game::runMainLoop() {
    handleEvents();
    update();
    render();
    tick();
}

SDL_Keycode getKey(SDL_KeyboardEvent keyStruct) {
    return keyStruct.keysym.sym;
}

bool compareKeys(SDL_KeyboardEvent keyStruct, SDL_Keycode expected) {
    return getKey(keyStruct) == expected;
}

bool isPast(){}


void Game::handleEvents(SDL_Rect& paddle1, SDL_Rect& paddle2, int moveSpeed) {
    SDL_Event event;

    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_KEYDOWN: {
                if (compareKeys(event.key, SDLK_ESCAPE)) {
                    // Pause the game
                } else {
                    // First paddle
                    if (compareKeys(event.key, player1.up)) {
                        std::cout << "P1 Up" << std::endl;
                    } else if (compareKeys(event.key, player1.down)) {
                        std::cout << "P1 Down" << std::endl;
                    }
                    // Second paddle
                    if (compareKeys(event.key, player2.up)) {
                        std::cout << "P2 Up" << std::endl;
                    } else if (compareKeys(event.key, player2.down)) {
                        std::cout << "P2 Down" << std::endl;
                    }
                }
            }
                break;
            case SDL_QUIT: {
                isRunning = false;
                std::cout << "Quit." << std::endl;
            }
                break;
            default: {
            }
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
