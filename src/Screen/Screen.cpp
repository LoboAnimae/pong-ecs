//
// Created by yagdrassyl on 7/21/22.
//

#include "Screen.h"
#include "../Console/ConsoleMessage.h"
#include <SDL2/SDL.h>

namespace Game::Screen {

    int sx = 100;
    int sy = 100;

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

    void Screen::update(SDL_Rect *ball, SDL_Rect *paddle1, SDL_Rect *paddle2, float dT) {
//        ConsoleMessage::INFO("Updating...");

/*
 *
 *  (0, 0)                    (SCREEN_WIDTH, 0)
 *  ____________________________________
 * |                                    |
 * |                                    |
 * |                                    |
 * |                                    |
 * |____________________________________|
 * (0, SCREEN_HEIGHT)      (SCREEN_WIDTH, SCREEN_HEIGHT)
 * */


        /**
         * Screen
         */
        // Hits the left side or the right side
        if (ball->x <= 0 || ball->x + ball->w >= dims->width) {
            sx *= -1;
        }

        // Hits the top of the screen (0, 0)
        if (ball->y <= 0) {
            sy *= -1;
        }

        // Hits the bottom of the screen, past the paddle
        if (ball->y + ball->h >= dims->height) {
            setNewError("Game Over :(", INFO);
        }

        /**
         * Paddle
         */
        // The ball hits the paddle

        /**
         * (0, 0) (paddle->w, 0)
         *           _________
         *          |        |      Outside when:
         *          |        |          - ball->x           >   paddle->x + paddle->w
         *          |        |          - ball->y           >   paddle->y + paddle->h
         *          |        |          - ball->y + ball->h <   paddle->y
         *          |        |      ---------
         *          |        |      |       |
         *          | paddle |      | Ball  |
         *          |        |      |       |
         *          |        |      ---------
         *          |        |
         *          |        |
         *          |        |
         *          |        |
         *          |________|
         *   (0, paddle->h)  (paddle->w, paddle->h)
         *
         *
         *           _________
         *          |        |
         *          |        |
         *          |     ---------
         *          |     |       |
         *          | padd| Ball  |
         *          |     |       |
         *          |     ---------
         *          |        |
         *          |        |
         *          |        |              Inside when:
         *          |        |                  - paddle->y + paddle->h     >   ball->y     >   paddle->y
         *          |________|                  - paddle->x                 <   ball->x     <   paddle->x + paddle->w
         *
         */


        /**
         * |||  Paddle 1 |||
         * The paddle is to the left
         *
         */


        struct SquareCorners {
            int topLeft;
            int topRight;
            int bottomLeft;
            int bottomRight;

            SquareCorners(SDL_Rect *rect) {
                topLeft = rect->x + rect->y;
                topRight = rect->x + rect->w + rect->y;
                bottomLeft = rect->x + rect->y + rect->h;
                bottomRight = rect->x + rect->w + rect->y + rect->h;
            };
        };

        auto ballCorners = SquareCorners(ball);

        if (
            // The ball has a corner that's between the paddle's y borders
            // Either the top left corner
                ((
                         ballCorners.topLeft >= paddle1->y &&
                         ball->y <= paddle1->y + paddle1->h
                 )
                 ||
                 // Or the bottom corner is between the borders
                 (
                         ball->y + ball->h >= paddle1->y &&
                         ball->y + ball->h <= paddle1->y + paddle1->h
                 ))
                &&
                // And the ball is in the paddle's area
                (
                        ball->x >= paddle1->x &&
                        ball->x <= paddle1->x + paddle1->w
                )
                ) {}


        if (
            // The ball has a corner that's between the paddle's y borders
            // Either the top right corner
                ((
                         ball->y >= paddle1->y &&
                         ball->y <= paddle1->y + paddle1->h
                 )
                 ||
                 // Or the bottom corner is between the borders
                 (
                         ball->y + ball->h >= paddle1->y &&
                         ball->y + ball->h <= paddle1->y + paddle1->h
                 ))
                &&
                // And the ball is in the paddle's area
                (
                        ball->x >= paddle1->x &&
                        ball->x <= paddle1->x + paddle1->w
                )
                ) {}
        if (
            // If the ball is going past the left side of the screen
            // If the ball hits the top of the paddle
                ball->y + ball->h >= paddle->y &&
                ball->x + ball->w >= paddle->x &&
                ball->x <= paddle->x + paddle->w) {
            sy += -(int) (sy * 1.1);
            sx *= (int) (sx * 1.1);
        }


        ConsoleMessage::DEBUG(
                "X: " + std::to_string(ball->x) + " Y: " + std::to_string(ball->y) + " dT: " + std::to_string(dT));
        ball->x += sx * dT;
        ball->y += sy * dT;

    }

    void Screen::render(SDL_Rect *ball, SDL_Rect *paddle) const {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 1);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 1);
        SDL_RenderFillRect(renderer, ball);
        SDL_RenderFillRect(renderer, paddle);

        SDL_RenderPresent(renderer);
    }


    Screen *New(const char *title, Game::Screen::Dimensions dimensions, Game::Screen::Options options) {
        return new Screen(title, dimensions, options);
    }

    Screen *New(const char *title, int width, int height, Game::Screen::Options options) {
        return Game::Screen::New(title, Game::Screen::Dimensions{.width = width, .height = height}, options);
    }
}