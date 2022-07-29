//
// Created by yagdrassyl on 7/21/22.
//

#ifndef PONGPROJECT_SCREEN_H
#define PONGPROJECT_SCREEN_H

#include <SDL.h>
#include "../Error/Error.h"

namespace Game::Screen {


    struct Dimensions {
        int width;
        int height;
    };

    struct Options : AllowError {

        Options(StandardError *error) : AllowError(error) {}
    };

    /**
     * Takes care of the screen. Renders a window.
     */
    class Screen : public ErrorSupport {
    public:
        void update();

        void render();

        void init();

        Screen(const char *title, int width, int height, Game::Screen::Options options);

        Screen(const char *title, Game::Screen::Dimensions dims, Game::Screen::Options options);

        ~Screen();
        char *title;
        SDL_Window *window;
        SDL_Renderer *renderer;
        Game::Screen::Dimensions *dims;
    };

    Screen *New(const char *title, Game::Screen::Dimensions, Game::Screen::Options);

    [[maybe_unused]] Screen *New(const char *title, int width, int height, Game::Screen::Options);

} // Game

#endif //PONGPROJECT_SCREEN_H
