//
// Created by yagdrassyl on 7/21/22.
//

#include "Event.h"
#include "../Console/ConsoleMessage.h"
#include <SDL.h>

namespace Game::EventManager {
    void Event::handleEvents(SDL_Rect ball, SDL_Rect paddle) {
        ConsoleMessage::info("Handling Events...");

        SDL_Event event;

        while (SDL_PollEvent(&event) != 0) {
            if (event.type == SDL_QUIT) {
                setNewError((char *) "Program ended by user", FATAL);
            }

            if (event.type == SDL_KEYDOWN) {
                switch (event.key.keysym.sym) {
                    case SDLK_LEFT: {
                        paddle.x -= 10;
                    }
                        break;
                    case SDLK_RIGHT: {
                        paddle.x += 10;
                    }
                        break;
                }
            }
        }
    }

    Event::Event(Game::EventManager::Options options) : ErrorSupport(options.parentError, (char *) "EventHandler") {
        controllableEntities = options.controllableEntities;
    }

    Event *New(Game::EventManager::Options options) {
        return new Event(options);
    }

    Event *New(StandardError *errorManager, std::vector<Game::ControllableEntity> *controllableEntities) {
        auto options = Game::EventManager::Options{.parentError = errorManager, .controllableEntities = controllableEntities};
        return Game::EventManager::New(options);
    }


} // Game