//
// Created by yagdrassyl on 7/21/22.
//

#ifndef PONGPROJECT_SCREEN_H
#define PONGPROJECT_SCREEN_H

#include <SDL2/SDL.h>
#include "../Structs/Geometry.h"
#include <string>

using namespace std;
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

namespace Game::Screen {

    // Entities.
    // TODO: Make these into individual entities



    struct ScreenOptions {

        explicit ScreenOptions() = default;

        ~ScreenOptions() = default;
    };

    /**
     * Takes care of the screen. Renders a window.
     */
    class Screen {
    public:
        void update(SDL_Rect &ball, SDL_Rect &paddle1, SDL_Rect &paddle2, float dT) const;

        void render(SDL_Rect &ball, SDL_Rect &paddle1, SDL_Rect &paddle2) const;

        void init();

        Screen(string &title, int width, int height, ScreenOptions options);

        Screen(string &title, Geometry::Dimensions dims, ScreenOptions p_options);

        ~Screen();

        string title;
        SDL_Window *window;
        SDL_Renderer *renderer;
        Geometry::Dimensions *dims;
    };

    Screen *New(std::string title = "My Game",
                Geometry::Dimensions * = Geometry::Dimensions::New(SCREEN_WIDTH, SCREEN_HEIGHT),
                ScreenOptions * = nullptr

    );

    Screen *New(std::string title = "My Game",
                int width = SCREEN_WIDTH,
                int height = SCREEN_HEIGHT,
                ScreenOptions * = nullptr
    );

} // Game

#endif //PONGPROJECT_SCREEN_H
