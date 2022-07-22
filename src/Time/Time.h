//
// Created by yagdrassyl on 7/21/22.
//

#ifndef PONGPROJECT_TIME_H
#define PONGPROJECT_TIME_H
#include <SDL.h>

namespace Game {
    class Time {

    public:
        explicit Time(int FPS);
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

} // Game

#endif //PONGPROJECT_TIME_H
