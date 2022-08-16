#include <iostream>
#include "./Game/Game.h"
#include <SDL2/SDL.h>
#define SCREEN_FPS 60

int main() {
    auto game = Game(); // Allocate the game in the stack
    game.init();
    game.setup();
    while (game.isRunning) {
        game.runMainLoop();
    }

    SDL_Quit();
    return 0;
}
