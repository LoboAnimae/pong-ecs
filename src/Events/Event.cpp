//
// Created by yagdrassyl on 7/21/22.
//

#include "Event.h"
#include <SDL.h>

namespace Game {
    void Event::handle_events() {
        SDL_Event event;

        while (SDL_PollEvent(&event) != 0) {
            if (event.type == SDL_QUIT) {
                setNewError((char *) "User Quit", FATAL);
            }

            if (event.type == SDL_KEYDOWN) {
//                switch (event.key.keysym.sym)

            }
        }
    }

    Event::Event(EventOptions options) : ErrorSupport(options.parent_error, (char *) "EventHandler") {
        controllableEntities = options.controllableEntities; 
    }
} // Game