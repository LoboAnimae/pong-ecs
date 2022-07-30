//
// Created by yagdrassyl on 7/21/22.
//

#ifndef PONGPROJECT_TIME_H
#define PONGPROJECT_TIME_H

#include <SDL.h>
#include "../Error/Error.h"

namespace Game::Time {

    struct Options : AllowError {
        explicit Options(StandardError *error) : AllowError(error) {}
    };

    class Time : public ErrorSupport {
    public:
        explicit Time(int FPS, Game::Time::Options);

        ~Time();

        void frameStart();

        void frameEnd();

        bool allowedNextFrame();

    private:
        int FPS;
        Uint64 frameStartTimestamp;
        Uint64 frameEndTimestamp;
        Uint64 frameTicks;
        Uint64 deltaTime;
        Uint64 currentTicks;
        Uint64 tick;

    };

    Time *New(int FPS, Game::Time::Options);

} // Game

#endif //PONGPROJECT_TIME_H
