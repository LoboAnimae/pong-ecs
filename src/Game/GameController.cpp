//
// Created by yagdrassyl on 7/21/22.
//

#include "GameController.h"
#include "../Screen/Screen.h"
#include "../Console/ConsoleMessage.h"
#include <iostream>

bool Game::Master::has_error() {
    return present_error->exists;
}

void Game::Master::run_loop() {
    while (isRunning && !has_error()) {
        time_controller->frameStart();
        event_controller->handle_events();
        screen_controller->update();
        screen_controller->render();
        time_controller->frameEnd();
    }

    if (present_error->exists) {
        std::string errorMessage = std::string(present_error->message);
        ConsoleMessage::error(errorMessage);
    }

}

Game::Master::Master(Game::InitParameters params) {
    time_controller = new Time(params.FPS);
    present_error = new StandardError();

    if (params.screen) {
        screen_controller = params.screen;

        if (screen_controller->errorIsSet()) {
            std::string warningMessage = "New screen \"";
            warningMessage += params.screen->title;
            warningMessage += " \" had an error manager already existing, but a new one has been set.";
            ConsoleMessage::warning(warningMessage);
        }
        screen_controller->setErrorManager(present_error);

    } else {
        screen_controller = Game::Screen::New("New Game",
                                              800,
                                              600,
                                              Game::Screen::Options{present_error}
        );
    }
    event_controller = new Event({.parent_error = present_error, .controllableEntities = nullptr});
    isRunning = true;
}

void Game::Master::init() {
    screen_controller->init();
}

void Game::Master::setup() {
//    for ()

}

Game::Master::~Master() {
    delete screen_controller;
}
