//
// Created by yagdrassyl on 7/21/22.
//

#ifndef PONGPROJECT_EVENT_H
#define PONGPROJECT_EVENT_H

#include "../Error/Error.h"
#include "../Entity/ControllableEntity.h"
#include <vector>

namespace Game::EventManager {

    struct Options {
        StandardError *parentError;
        std::vector<Game::ControllableEntity> *controllableEntities;
    };

    class Event : public ErrorSupport {
    public:
        void handle_events();

        std::vector<Game::ControllableEntity> *controllableEntities; // Slow, but scalable
        explicit Event(Options options);
    };

    Event *New(Options);

    Event *New(StandardError *, std::vector<Game::ControllableEntity> *);
} // Game

#endif //PONGPROJECT_EVENT_H
