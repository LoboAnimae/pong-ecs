//
// Created by yagdrassyl on 7/21/22.
//

#include "Event.h"
#include "../Console/ConsoleMessage.h"
#include "../Coords/Coordinates.h"
#include <SDL.h>

namespace Game::EventManager {

    static int paddleSpeed = 10;

    void Event::handleEvents(SDL_Rect &ball, SDL_Rect &paddle1, SDL_Rect &paddle2, int screenHeight, int screenWidth) {
//        ConsoleMessage::info("Handling Events...");

        SDL_Event event;

        while (SDL_PollEvent(&event) != 0) {
            ConsoleMessage::INFO("Pressing");
            if (event.type == SDL_QUIT) {
                setNewError((char *) "Program ended by user", FATAL);
            }

            if (event.type == SDL_KEYDOWN) {
                auto screenCollider = rectangularDimensions(0, 0, screenWidth, screenHeight);
                switch (event.key.keysym.sym) {
                    case SDLK_w: {
                        auto paddle1Collider = rectangularDimensions(paddle1);
                        ConsoleMessage::INFO("Paddle1Y = " + std::to_string(paddle1.y));
                        if (paddle1Collider.sides.top.isUnderOf(screenCollider.sides.top.from)) {
                            paddle1.y -= paddleSpeed;
                        }
                    }
                        break;
                    case SDLK_s: {
                        auto paddle1Collider = rectangularDimensions(paddle1);
                        ConsoleMessage::INFO("Paddle1Y = " + std::to_string(paddle1.y));
                        if (paddle1Collider.sides.bottom.isOverOf(screenCollider.sides.bottom.from)) {
                            paddle1.y += paddleSpeed;
                        }
                    }
                        break;
                    case SDLK_UP: {
                        auto paddle2Collider = rectangularDimensions(paddle2);
                        ConsoleMessage::INFO("Paddle2Y = " + std::to_string(paddle2.y));
                        if (paddle2Collider.sides.top.isUnderOf(screenCollider.sides.top.from)) {
                            paddle2.y -= paddleSpeed;
                        }
                    }
                        break;
                    case SDLK_DOWN: {
                        auto paddle2Collider = rectangularDimensions(paddle2);
                        ConsoleMessage::INFO("Paddle2Y = " + std::to_string(paddle2.y));
                        if (paddle2Collider.sides.bottom.isOverOf(screenCollider.sides.bottom.from)) {
                            paddle2.y += paddleSpeed;
                        }
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