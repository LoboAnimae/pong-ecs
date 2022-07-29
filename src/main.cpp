#include <iostream>

#include "./Game/GameController.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

int main() {
//    auto screenParams = Game::ScreenParams("My game", SCREEN_WIDTH, SCREEN_HEIGHT);
    auto mainWindow = Game::Screen::New("My game", SCREEN_WIDTH, SCREEN_HEIGHT, Game::Screen::Options{nullptr});

    auto params = Game::InitParameters{
            .FPS = 60,
            .screen = Game::Screen::New("My Game", SCREEN_WIDTH, SCREEN_HEIGHT, Game::Screen::Options{nullptr})
    };
    auto *game = new Game::Master(params);

    game->init();
    game->run_loop();

    SDL_Quit();
    return 0;
}
