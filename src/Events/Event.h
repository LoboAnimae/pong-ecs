//
// Created by yagdrassyl on 7/21/22.
//

#ifndef PONGPROJECT_EVENT_H
#define PONGPROJECT_EVENT_H
#include "../Error/Error.h"
#include "../Entity/ControllableEntity.h"
#include <vector>
namespace Game {

    struct EventOptions {
        StandardError* parent_error;
        std::vector<Game::ControllableEntity>* controllableEntities;
    };
    class Event : ErrorSupport {
    public:
        void handle_events();
        std::vector<Game::ControllableEntity>* controllableEntities; // Slow, but scalable
        explicit Event(EventOptions options);

    private:

    };

} // Game

#endif //PONGPROJECT_EVENT_H
