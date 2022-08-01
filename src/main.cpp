#include <iostream>

#include "./Game/GameController.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define SCREEN_FPS 60


using namespace Game;

int main() {
//    auto screenParams = Game::ScreenParams("My game", SCREEN_WIDTH, SCREEN_HEIGHT);
    auto mainWindow = Game::Screen::New("My game", SCREEN_WIDTH, SCREEN_HEIGHT, Game::Screen::Options{nullptr});

    auto screen = Screen::New("My Game", SCREEN_WIDTH, SCREEN_HEIGHT, Game::Screen::Options{nullptr});
    auto event = EventManager::New(EventManager::Options{.parentError = nullptr, .controllableEntities = nullptr});
    auto time = Time::New(SCREEN_FPS, Time::Options{nullptr});
    auto params = InitParameters{
            .FPS = SCREEN_FPS,
            .screen = screen,
            .event = event,
            .time = time
    };
    auto *game = new Game::Manager(params);
    game->setup();

    game->init();
    game->runLoop();

    return 0;
}
