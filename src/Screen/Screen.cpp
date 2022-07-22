//
// Created by yagdrassyl on 7/21/22.
//

#include "Screen.h"

namespace Game
{
	void Screen::init()
	{
		if (!SDL_Init(SDL_INIT_EVERYTHING))
		{
			window = SDL_CreateWindow(title, 0, 0, dims.width, dims.height, 0);
			renderer = SDL_CreateRenderer(window, -1, 0);
		}

	}
	Screen::Screen(const char* p_title, ScreenDimensions p_dims)
	{
		title = (char*)p_title;
		dims = p_dims;
		window = nullptr;
		renderer = nullptr;
		dims = p_dims;
	}
	Screen::Screen(const char* p_title, int p_width, int p_height)
		: Screen(p_title, ScreenDimensions{ .width = p_width, .height = p_height })
	{
	}
}