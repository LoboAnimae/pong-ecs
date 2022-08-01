//
// Created by yagdrassyl on 7/21/22.
//

#include "Screen.h"
#include "../Console/ConsoleMessage.h"
#include <SDL2/SDL.h>

namespace Game::Screen {

    int sx = 1;
    int sy = 1;

    void Screen::init() {
        if (!SDL_Init(SDL_INIT_EVERYTHING)) {
            window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, dims->width,
                                      dims->height, 0);
            renderer = SDL_CreateRenderer(window, -1, 0);
            if (!(window && renderer)) {
                setNewError("Could not initialize window or renderer", FATAL);
            }
        } else {
            setNewError("Could not initialize SDL", PANIC);
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
        SDL_Quit();
        delete dims;
    };

    Screen::Screen(const char *p_title, int p_width, int p_height, Game::Screen::Options options)
            : Screen(p_title, Game::Screen::Dimensions{.width = p_width, .height = p_height}, options) {
    }

    void Screen::update(SDL_Rect ball, SDL_Rect paddle) {
        ConsoleMessage::info("Updating...");
        if (ball.x <= 0) {
            sx *= -1;
        }

        if (ball.x + ball.w >= dims->width) {
            sx *= -1;
        }

        if (ball.y <= 0) {
            sy *= -1;
        }

        if (ball.y + ball.h >= dims->height) {
            setNewError((char*)"Game Over :(", INFO);
        }

        if (ball.y + ball.h >= paddle.y &&
        ball.x + ball.w >= paddle.x &&
        ball.x <= paddle.x + paddle.w) {
            sy += -(int) (sy * 0.1);
            sx *= (int) (sx * 1.1);
        }

        ball.x += sx;
        ball.y += sy;

    }

    void Screen::render(SDL_Rect ball, SDL_Rect paddle) const {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 1);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 1);
        SDL_RenderFillRect(renderer, &ball);
        SDL_RenderFillRect(renderer, &paddle);

        SDL_RenderPresent(renderer);
    }



    Screen *New(const char *title, Game::Screen::Dimensions dimensions, Game::Screen::Options options) {
        return new Screen(title, dimensions, options);
    }

    Screen *New(const char *title, int width, int height, Game::Screen::Options options) {
        return Game::Screen::New(title, Game::Screen::Dimensions{.width = width, .height = height}, options);
    }
}