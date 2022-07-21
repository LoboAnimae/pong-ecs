#include <iostream>
#include "./Game/GameController.h"
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600


int main() {
    Game::InitParameters params = Game::InitParameters();
    Game::Master* game = new Game::Master(params);

    game->init("My game", SCREEN_WIDTH, SCREEN_HEIGHT);
    game->run_loop();
    return 0;
}
