//
// Created by yagdrassyl on 7/21/22.
//

#include "GameController.h"
#include "../Console/ConsoleMessage.h"
#include "../Static.h"


void Game::Manager::runLoop() {
    while (*Game::isRunning && !Game::hasError()) {
        components->timeController->frameStart();
        components->eventController->handleEvents(ball, paddle);
        components->screenController->update(ball, paddle);
        components->screenController->render(ball, paddle);
        components->timeController->frameEnd();
    }

    if (Game::hasError()) {
        std::string errorMessage = std::string(Game::getError()->message);
        ConsoleMessage::error(errorMessage);
    }

}

Game::Manager::Manager(Game::InitParameters params) : ball(), paddle() {
    Game::isRunning = new bool(true);
    Game::gameError = new StandardError();
    components = new Components();
    setComponents(params.screen, params.time, params.event);
}

void Game::Manager::init() {
    components->screenController->init();
}

void Game::Manager::setup() {
    auto dims = components->screenController->dims;
    ball.x = 20;
    ball.y = 20;
    ball.w = 15;
    ball.h = 15;

    paddle.x = (dims->width / 2) - 50;
    paddle.y = dims->height - 20;
    paddle.w = 100;
    paddle.h = 20;

}

Game::Manager::~Manager() {
    delete components->screenController;
}

void Game::Manager::setTime(Game::Time::Time *time) {
    if (time) {
        components->timeController = time;

        if (components->timeController->errorIsSet()) {
            std::string warningMessage = "A time manager with an existing error controller has overridden the previous error manager. Possible memory leak.";
            ConsoleMessage::warning(warningMessage);
        }
        components->timeController->setErrorManager(Game::getError());

    } else {
        ConsoleMessage::info((char *) "Using default parameters for \"Time\"");

        components->timeController = Game::Time::New(60, Game::Time::Options{Game::getError()});
    }
}

void Game::Manager::setEventManager(Game::EventManager::Event *eventManager) {
    if (eventManager) {
        components->eventController = eventManager;

        if (components->eventController->errorIsSet()) {
            std::string warningMessage = "Event manager had an error manager already, but a new one has been set. Possible memory leak.";
            ConsoleMessage::warning(warningMessage);
        }
        components->eventController->setErrorManager(Game::getError());

    } else {
        ConsoleMessage::info((char *) "Using default parameters for \"EventManager\"");
        components->eventController = Game::EventManager::New(
                Game::EventManager::Options{.parentError = Game::getError(), .controllableEntities = nullptr});
    }
}

void Game::Manager::setScreen(Game::Screen::Screen *screen) {
    if (screen) {
        components->screenController = screen;

        if (components->screenController->errorIsSet()) {
            std::string warningMessage = "New screen \"";
            warningMessage += screen->title;
            warningMessage += " \" had an error manager already existing, but a new one has been set.";
            ConsoleMessage::warning(warningMessage);
        }
        components->screenController->setErrorManager(Game::getError());

    } else {
        ConsoleMessage::info((char *) "Using default parameters for \"Screen\"");
        components->screenController = Game::Screen::New("New Game",
                                                         800,
                                                         600,
                                                         Game::Screen::Options{Game::getError()}
        );
    }
}

void
Game::Manager::setComponents(Game::Screen::Screen *screen, Game::Time::Time *time, Game::EventManager::Event *event) {
    setScreen(screen);
    setTime(time);
    setEventManager(event);

}

Game::Time::Time *Game::Components::getTimeController() {
    return timeController;
}

Game::EventManager::Event *Game::Components::getEventController() {
    return eventController;
}

Game::Screen::Screen *Game::Components::getScreenController() {
    return screenController;
}
