//
// Created by yagdrassyl on 7/21/22.
//

#include "Screen.h"
#include "../Console/ConsoleMessage.h"
#include <SDL2/SDL.h>
#include "../Coords/Coordinates.h"
#include "../Misc.h"

namespace Game::Screen {

    int sx = 50;
    int sy = 50;
//    int sx = -0;
//    int sy = 0;

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

    void Screen::update(SDL_Rect &ball, SDL_Rect &paddle1, SDL_Rect &paddle2, float dT) {

        /**
        *
        *  (0, 0)                    (SCREEN_WIDTH, 0)
        *  ____________________________________
        * |                                    |
        * |                                    |
        * |                                    |
        * |                                    |
        * |____________________________________|
        * (0, SCREEN_HEIGHT)      (SCREEN_WIDTH, SCREEN_HEIGHT)
        *
        */

        /**
         * Colliders
         */

        auto ballCollider = rectangularDimensions(ball);
        auto paddle1Collider = rectangularDimensions(paddle1);
        auto paddle2Collider = rectangularDimensions(paddle2);
        auto screenCollider = rectangularDimensions(0, 0, dims->width, dims->height);

        /**
         * Screen
         */
        // A point of the ball is not contained in the screen
        if (!screenCollider.contains(ballCollider.corners.topLeft) ||
            !screenCollider.contains(ballCollider.corners.bottomRight)) {

            // The ball is trying to get out of the screen via the Y axis
            if (!screenCollider.containsY(ballCollider.corners.topLeft) ||
                !screenCollider.containsY(ballCollider.corners.bottomLeft)) {

                Game::Math::invert(sy);
            }

            // ATTENTION. THIS FAILS IF BOTH POINTS ARE OUTSIDE THE SCREEN AT THE SAME TIME, AND THE GAME WILL THINK BOTH PLAYERS WON.
            // TO FIX IT: Make it so that it checks if x <= 0 or x >= SCREEN_WIDTH instead. Nevertheless, the current solution is more elegant.
            // The ball is trying to get out of the screen via the X axis (win-lose condition)
            // Right side wins
            if (screenCollider.sides.left.isToTheRightOf(ballCollider.sides.right)) {
                ConsoleMessage::INFO("Right Player Wins!");
                setNewError("Game Ended. Right Player won.", ERROR_TYPE::FATAL);
            }
            // Left side wins
            if (screenCollider.sides.right.isToTheLeftOf(ballCollider.sides.left)) {
                ConsoleMessage::INFO("Left Player Wins!");
                setNewError("Game Ended. Left Player won.", ERROR_TYPE::FATAL);
            }
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


        // The ball collided against a paddle
        if (// Left Paddle
                paddle1Collider.contains(ballCollider.corners.topLeft) ||
                paddle1Collider.contains(ballCollider.corners.bottomLeft) ||
                // Right Paddle
                paddle2Collider.contains(ballCollider.corners.topRight) ||
                paddle2Collider.contains(ballCollider.corners.bottomRight)) {

            Game::Math::invert(sx);
        }

        ball.x += sx * dT;
        ball.y += sy * dT;

        ConsoleMessage::DEBUG(
                "X: " + std::to_string(ball.x) +
                " Y: " + std::to_string(ball.y) +
                " dT: " + std::to_string(dT));

    }

    void Screen::render(SDL_Rect &ball, SDL_Rect &paddle1, SDL_Rect &paddle2) const {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 1);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 1);
        SDL_RenderFillRect(renderer, &ball);
        SDL_RenderFillRect(renderer, &paddle1);
        SDL_RenderFillRect(renderer, &paddle2);

        SDL_RenderPresent(renderer);
    }


    Screen *New(const char *title, Game::Screen::Dimensions dimensions, Game::Screen::Options options) {
        return new Screen(title, dimensions, options);
    }

    Screen *New(const char *title, int width, int height, Game::Screen::Options options) {
        return Game::Screen::New(title, Game::Screen::Dimensions{.width = width, .height = height}, options);
    }
}