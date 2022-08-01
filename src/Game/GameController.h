//
// Created by yagdrassyl on 7/21/22.
//

#ifndef PONGPROJECT_GAMECONTROLLER_H
#define PONGPROJECT_GAMECONTROLLER_H

#include "../Controller/Controller.h"
#include "../Time/Time.h"
#include "../Events/Event.h"
#include "../Screen/Screen.h"
#include "../Error/Error.h"
#include "../Entity/ControllableEntity.h"
#include <vector>

namespace Game {
    struct ScreenParams {
        int screen_width;
        int screen_height;
        const char *title;

        ScreenParams(const char *p_title, int p_width, int p_height) :
                title(p_title), screen_width(p_width), screen_height(p_height) {};
    };


    struct InitParameters {
        int FPS;
        Game::Screen::Screen *screen;
        Game::EventManager::Event *event;
        Game::Time::Time *time;
    };

    struct Components {

        Game::Time::Time *timeController;
        Game::EventManager::Event *eventController;
        Game::Screen::Screen *screenController;

        Game::Time::Time *getTimeController();

        Game::EventManager::Event *getEventController();

        Game::Screen::Screen *getScreenController();
    };


    class Manager {
    public:
        SDL_Rect ball;
        SDL_Rect paddle;

        explicit Manager(InitParameters params);

        ~Manager();

        void init();

        void setup();


        void runLoop();


    private:
        Components *components;

        void setComponents(Game::Screen::Screen *, Game::Time::Time *, Game::EventManager::Event *);

        void setScreen(Game::Screen::Screen *);

        void setTime(Game::Time::Time *);

        void setEventManager(Game::EventManager::Event *);


    };

}


#endif //PONGPROJECT_GAMECONTROLLER_H
