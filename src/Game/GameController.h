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

	struct ScreenParams {
		int screen_width;
		int screen_height;
		const char* title;
	};
    struct InitParameters {
        input::Controller* controllers;
		int FPS;
		ScreenParams screen_params;
    };
    class Master {
    public:
        explicit Master(InitParameters params);

        ~Master();

        void init(const char *title, int width, int height);

        void setup();

        void run_loop();



    private:
		bool isRunning;
        input::Controller* controllers;
        Game::Time time_controller;
        Game::Event event_controller;
        Game::Screen screen_controller;
    };

}


#endif //PONGPROJECT_GAMECONTROLLER_H
