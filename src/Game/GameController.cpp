//
// Created by yagdrassyl on 7/21/22.
//

#include "GameController.h"

void Game::Master::run_loop()
{
	while (isRunning)
	{
		time_controller.frameStart();
		event_controller.handle_events();
		screen_controller.update();
		screen_controller.render();
		time_controller.frameEnd();
	}

}
Game::Master::Master(Game::InitParameters params)
	: time_controller(Time(params.FPS)),
	  screen_controller(params.screen_params.title, params.screen_params.screen_width, params.screen_params.screen_height)
{
	isRunning = true;
	controllers = params.controllers;
}
void Game::Master::init(const char* title, int width, int height)
{
	screen_controller.init();
}
Game::Master::~Master()
= default;
