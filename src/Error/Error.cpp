//
// Created by yagdrassyl on 7/25/22.
//

#include "Error.h"

namespace Game {
    char *getError(ERROR_TYPE type) {
        char *errors[] = {(char *) "sent info", (char *) "found fatal error", (char *) "panicked"};
        return errors[type];
    }

    ErrorSupport::ErrorSupport(StandardError* error, char * caller) {
        masterError = error;
        name = caller;
    }

    void ErrorSupport::setNewError(char *error, ERROR_TYPE type) {
        if (masterError) {
            masterError->exists = true;
            masterError->message = error;
            masterError->caller = (char *) "";
            masterError->errorType = type;
        }
    }

    bool ErrorSupport::errorIsSet() {
        return masterError != nullptr;
    }

    void ErrorSupport::setErrorManager(StandardError *newError) {
        masterError = newError;
    }
} // Game