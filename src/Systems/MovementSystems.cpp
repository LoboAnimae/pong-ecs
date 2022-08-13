//
// Created by yagdrassyl on 8/12/22.
//
#include "./SystemsManager.h"

struct ScreenPositionComponent {
    int x;
    int y;

    ScreenPositionComponent(int p_x, int p_y) {
        x = p_x;
        y = p_y;
    }

    ScreenPositionComponent() {
        x = 0;
        y = 0;
    }

    ~ScreenPositionComponent() = default;
};

struct SpriteDimensionsComponent {
    int w;
    int h;

    SpriteDimensionsComponent(int p_w, int p_h) {
        w = p_w;
        h = p_h;
    }

    SpriteDimensionsComponent() {
        w = 0;
        h = 0;
    }

    ~SpriteDimensionsComponent() = default;


};

struct BoxDimensionsComponent {
    ScreenPositionComponent screenPositionComponent;
    SpriteDimensionsComponent spriteDimensionsComponent;

    BoxDimensionsComponent(int p_x, int p_y, int p_w, int p_h) : screenPositionComponent(p_x, p_y),
                                                                 spriteDimensionsComponent(p_w, p_h) {
    }

    ~BoxDimensionsComponent() = default;

    [[nodiscard]] int getTopLeft() const {
        return screenPositionComponent.x;
    }

    [[nodiscard]] int getTopRight() const {
        return getTopLeft() + spriteDimensionsComponent.w;
    }

    [[nodiscard]] int getBottomLeft() const {
        return getTopLeft() + spriteDimensionsComponent.h;
    }

    [[nodiscard]] int getBottomRight() const {
        return getBottomLeft() + spriteDimensionsComponent.w;
    }
};

enum VELOCITY_DIMENSIONS {
    X,
    Y
};

struct VelocityComponent {
    int x;
    int y;

    VelocityComponent(int p_x, int p_y) {
        x = p_x;
        y = p_y;
    }

    VelocityComponent() {
        x = 0;
        y = 0;
    }

    void invert(VELOCITY_DIMENSIONS onDim) {
        if (onDim == X) {
            x *= -1;
        } else if (onDim == Y) {
            y *= -1;
        }
    }

    [[nodiscard]] int getX() const {
        return x;
    }

    [[nodiscard]] int getY() const {
        return y;
    }

    void accelerate(VELOCITY_DIMENSIONS onDim, float byUnits) {
        if (onDim == X) {
            x *= byUnits;
        } else if (onDim == Y) {
            y *= byUnits;
        }
    }
};

void spawnPlayerEntity() {
    auto reg = SystemsManager::getReg();
    const auto paddle1 = reg->create();
    const auto paddle2 = reg->create();
    reg->emplace<BoxDimensionsComponent>(paddle1, BoxDimensionsComponent(0, 0, 20, 100));
    reg->emplace<BoxDimensionsComponent>(paddle2, BoxDimensionsComponent(0, 0, 20, 100));
//    reg->emplace<ScreenPositionComponent>(paddle1, ScreenPositionComponent(0, 0));
//    reg->emplace<SpriteDimensionsComponent>(paddle1, SpriteDimensionsComponent(20, 100));
    reg->emplace<VelocityComponent>(paddle1, VelocityComponent(0, 0));
    reg->emplace<VelocityComponent>(paddle2, VelocityComponent(0, 0));
}

void playerMovementUpdateSystem() {

}