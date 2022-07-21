//
// Created by yagdrassyl on 7/21/22.
//

#ifndef PONGPROJECT_GAMECONTROLLER_H
#define PONGPROJECT_GAMECONTROLLER_H
#include "../Controller/Controller.h"
#include "../Time/Time.h"
#include "../Events/Event.h"
#include "../Screen/Screen.h"

namespace Game {
    struct InitParameters {
        input::Controller* controllers;

    };
    class Master {
    public:
        Master(InitParameters params);

        ~Master();

        void init(const char *title, int width, int height);

        void setup();

        void run_loop();



    private:
        input::Controller* controllers;
        Game::Time time_controller;
        Game::Event event_controller;
        Game::Screen screen_controller;
    };

}


#endif //PONGPROJECT_GAMECONTROLLER_H
