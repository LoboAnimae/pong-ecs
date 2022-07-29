//
// Created by yagdrassyl on 7/25/22.
//

#ifndef PONGPROJECT_CONTROLLABLEENTITY_H
#define PONGPROJECT_CONTROLLABLEENTITY_H
#include "./Entity.h"
namespace Game {

    class ControllableEntity : Entity {
    public:
        void move();
    };

} // Game

#endif //PONGPROJECT_CONTROLLABLEENTITY_H
