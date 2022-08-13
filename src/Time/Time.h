//
// Created by yagdrassyl on 7/21/22.
//

#ifndef PONGPROJECT_TIME_H
#define PONGPROJECT_TIME_H

#include <SDL2/SDL.h>

namespace Game::Time {

    struct Options {
        explicit Options() = default;
    };

    class Time {
    public:
        explicit Time(int FPS, Game::Time::Options);

        ~Time();

        void frameStart();

        float deltaTime;

        void frameEnd();

    private:
        int FPS;
        Uint32 frameStartTimestamp;
        Uint32 frameEndTimestamp;
        Uint32 frameTicks;
        Uint32 currentTicks;
        Uint32 tick;

    };

    Time *New(int FPS, Game::Time::Options);

} // Game

#endif //PONGPROJECT_TIME_H
