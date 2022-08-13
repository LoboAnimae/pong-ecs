//
// Created by yagdrassyl on 8/11/22.
//

#ifndef PONGPROJECT_ERROR_H
#define PONGPROJECT_ERROR_H

struct GameError {
    bool exists;
    std::string message;
    bool fatal;

    GameError() : exists(false), fatal(false) {};
};

static GameError gameError;

static void setNewError(std::string p_message, bool p_fatal) {
    gameError.message = std::move(p_message);
    gameError.fatal = p_fatal;
    gameError.exists = true;
};

static bool errorExists() {
    return gameError.exists;
}

static void cleanError() {
    gameError.message = "";
    gameError.fatal = false;
    gameError.exists = false;
}

#endif //PONGPROJECT_ERROR_H
