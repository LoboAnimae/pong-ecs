//
// Created by yagdrassyl on 7/21/22.
//

#include "GameController.h"

void Game::Master::run_loop() {
    time_controller.frameStart();
    event_controller.handle_events();
    screen_controller.update();
    screen_controller.render();
    time_controller.frameEnd();


}
