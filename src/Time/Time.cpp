//
// Created by yagdrassyl on 7/21/22.
//


#include "Time.h"
#include <SDL.h>
namespace Game {
	void Time::frameStart()
	{
		frameStartTimestamp = SDL_GetTicks64();
		// Expect frameEndTimestamp to never be 0
		if (!frameEndTimestamp) deltaTime = frameStartTimestamp;
		else deltaTime = frameEndTimestamp - frameStartTimestamp;
	}

	void Time::frameEnd()
	{
		// Right now
		currentTicks = frameEndTimestamp - frameStartTimestamp;
		if (currentTicks < frameTicks) {
			SDL_Delay(frameTicks - currentTicks);
		}
		tick++;
	}
	Time::Time(int p_FPS)
	{
		FPS = p_FPS;
		frameStartTimestamp = 0;
		frameEndTimestamp = 0;
		deltaTime = 0;
		currentTicks = 0;
		tick = 0;
		// Drop everything under the milliseconds
		frameTicks = (int)((1.0f / (float)p_FPS) * 1000.0f); // Data value is an int. It will drop the data.

		// Frames will be measured in ticks. A frame will be n ticks.

	}
	bool Time::allowedNextFrame()
	{


	}
	Time::~Time()
	{

	}
} // Game