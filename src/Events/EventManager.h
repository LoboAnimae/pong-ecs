//
// Created by yagdrassyl on 7/21/22.
//

#ifndef PONGPROJECT_EVENTMANAGER_H
#define PONGPROJECT_EVENTMANAGER_H

#include <SDL2/SDL.h>
#include <vector>

namespace Game::EventManager {

    struct EventManagerOptions {
        EventManagerOptions();
        ~EventManagerOptions();
    };

    class EventManager {
    public:
        void handleEvents(SDL_Rect &ball, SDL_Rect &paddle1, SDL_Rect &paddle2, int screenHeight, int screenWidth);

        EventManager() = default;
    };

    EventManager *New(EventManagerOptions);
} // Game

#endif //PONGPROJECT_EVENTMANAGER_H
