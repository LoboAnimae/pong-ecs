//
// Created by yagdrassyl on 7/21/22.
//

#ifndef PONGPROJECT_SCREEN_H
#define PONGPROJECT_SCREEN_H
#include <SDL.h>
namespace Game
{

	struct ScreenDimensions {
		int width;
		int height;
	};
	/**
	 * Takes care of the screen. Renders a window.
	 */
	class Screen
	{
	 public:
		void update();
		void render();
		void init();
		Screen(const char *title,  int width, int height);
		Screen(const char *title,  ScreenDimensions dims);

	 private:
		SDL_Window* window;
		SDL_Renderer* renderer;
		ScreenDimensions dims;
		char* title;
	};

} // Game

#endif //PONGPROJECT_SCREEN_H
