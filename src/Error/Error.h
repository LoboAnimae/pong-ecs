//
// Created by yagdrassyl on 7/25/22.
//

#ifndef PONGPROJECT_ERROR_H
#define PONGPROJECT_ERROR_H

namespace Game {

    enum ERROR_TYPE {
        INFO,
        FATAL,
        PANIC
    };


    struct StandardError {
        char *message;
        ERROR_TYPE errorType;
        char *caller;
        bool exists;

        StandardError() : message((char *) ""), errorType(INFO), caller((char *) ""), exists(false) {
        }
    };

    class ErrorSupport {
    public:
        ErrorSupport(StandardError *error, char *caller);

        char *name;

        bool errorIsSet();

        void setErrorManager(StandardError* newError);
        void setNewError(char *error, ERROR_TYPE type);

    protected:
        StandardError *masterError;

    };

    struct AllowError {
        StandardError *error;

        explicit AllowError(StandardError *error) : error(error) {}
    };

    char *getError(ERROR_TYPE type);

} // Game

#endif //PONGPROJECT_ERROR_H
