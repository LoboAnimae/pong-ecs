//
// Created by yagdrassyl on 7/21/22.
//

#include "GameController.h"
#include "../Screen/Screen.h"
#include "../Console/ConsoleMessage.h"
#include <iostream>

bool Game::Master::has_error() {
    return presentError->exists;
}

void Game::Master::run_loop() {
    while (isRunning && !has_error()) {
        timeController->frameStart();
        eventController->handle_events();
        screenController->update();
        screenController->render();
        timeController->frameEnd();
    }

    if (presentError->exists) {
        std::string errorMessage = std::string(presentError->message);
        ConsoleMessage::error(errorMessage);
    }

}



Game::Master::Master(Game::InitParameters params) {
    presentError = new StandardError();

    setScreen(params.screen);
    setTime(params.time);
    setEventManager(params.event);
    isRunning = true;
}

void Game::Master::init() {
    screenController->init();
}

void Game::Master::setup() {
//    for ()

}

Game::Master::~Master() {
    delete screenController;
}

void Game::Master::setTime(Game::Time::Time *time) {
    if (time) {
        timeController = time;

        if (timeController->errorIsSet()) {
            std::string warningMessage = "A time manager with an existing error controller has overridden the previous error manager. Possible memory leak.";
            ConsoleMessage::warning(warningMessage);
        }
        timeController->setErrorManager(presentError);

    } else {
        ConsoleMessage::info("Using default parameters for \"Time\"");

        timeController = Game::Time::New(60, Game::Time::Options{presentError});
    }
}

void Game::Master::setEventManager(Game::EventManager::Event *eventManager) {
    if (eventManager) {
        eventController = eventManager;

        if (eventController->errorIsSet()) {
            std::string warningMessage = "Event manager had an error manager already, but a new one has been set. Possible memory leak.";
            ConsoleMessage::warning(warningMessage);
        }
        eventController->setErrorManager(presentError);

    } else {
        ConsoleMessage::info("Using default parameters for \"EventManager\"");
        eventController = Game::EventManager::New(
                Game::EventManager::Options{.parentError = presentError, .controllableEntities = nullptr});
    }
}

void Game::Master::setScreen(Game::Screen::Screen *screen) {
    if (screen) {
        screenController = screen;

        if (screenController->errorIsSet()) {
            std::string warningMessage = "New screen \"";
            warningMessage += screen->title;
            warningMessage += " \" had an error manager already existing, but a new one has been set.";
            ConsoleMessage::warning(warningMessage);
        }
        screenController->setErrorManager(presentError);

    } else {
        ConsoleMessage::info("Using default parameters for \"Screen\"");
        screenController = Game::Screen::New("New Game",
                                             800,
                                             600,
                                             Game::Screen::Options{presentError}
        );
    }
}