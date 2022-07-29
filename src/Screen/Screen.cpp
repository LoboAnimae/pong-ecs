//
// Created by yagdrassyl on 7/21/22.
//

#include "Screen.h"
#include <SDL2/SDL.h>

namespace Game::Screen {


    void Screen::init() {
        if (!SDL_Init(SDL_INIT_EVERYTHING)) {
            window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, dims->width, dims->height, 0);
            renderer = SDL_CreateRenderer(window, -1, 0);
            if (!(window && renderer)) {
                setNewError((char *) "Could not initialize window or renderer", FATAL);
            }
        } else {
            setNewError((char *) "Could not initialize SDL", PANIC);
        }
    }

    Screen::Screen(const char *p_title, Game::Screen::Dimensions p_dims, Game::Screen::Options options)
            : ErrorSupport(options.error, (char *) "Screen") {
        title = (char *) p_title;
        masterError = options.error;
        dims = new Game::Screen::Dimensions{p_dims.width, p_dims.height};
        window = nullptr;
        renderer = nullptr;
    }

    Screen::~Screen() {
        SDL_DestroyWindow(window);
        SDL_DestroyRenderer(renderer);
        delete dims;
    };

    Screen::Screen(const char *p_title, int p_width, int p_height, Game::Screen::Options options)
            : Screen(p_title, Game::Screen::Dimensions{.width = p_width, .height = p_height}, options) {
    }

    void Screen::update() {

    }

    void Screen::render() {

    }


    Screen *New(const char *title, Game::Screen::Dimensions dimensions, Game::Screen::Options options) {
        return new Screen(title, dimensions, options);
    }

    [[maybe_unused]] Screen *New(const char *title, int width, int height, Game::Screen::Options options) {
        return Game::Screen::New(title, Game::Screen::Dimensions{.width = width, .height = height}, options);
    }
}