//
// Created by yagdrassyl on 8/12/22.
//

#ifndef PONGPROJECT_SYSTEMSMANAGER_H
#define PONGPROJECT_SYSTEMSMANAGER_H

#include <entt/entt.hpp>


namespace SystemsManager {
    static entt::registry reg;

    void executeSystems();

    static entt::registry *getReg();
};


#endif //PONGPROJECT_SYSTEMSMANAGER_H
