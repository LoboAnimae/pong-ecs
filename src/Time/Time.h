//
// Created by yagdrassyl on 7/21/22.
//

#ifndef PONGPROJECT_TIME_H
#define PONGPROJECT_TIME_H
#include <SDL2/SDL.h>

namespace Game {

    class Time {

    public:
        Time(int FPS);
        ~Time();
        void frameStart();
        void frameEnd();
        bool allowedNextFrame();
    private:
        int FPS;
        Uint32 frameStartTimestamp;
        Uint32 frameEndTimestamp;
        float frameDuration;
        float dT;

    };

} // Game

#endif //PONGPROJECT_TIME_H
