//
// Created by yagdrassyl on 8/3/22.
//

#ifndef PONGPROJECT_GEOMETRY_H
#define PONGPROJECT_GEOMETRY_H

namespace Game::Geometry {

    struct Dimensions {
        [[nodiscard]] int getWidth() const;
        [[nodiscard]] int getHeight() const;
        static Dimensions *New(int width, int height);
        static Dimensions New_Static(int width, int height);

    private:
        int width;
        int height;
        Dimensions(int width, int height);
    };

} // Game

#endif //PONGPROJECT_GEOMETRY_H
