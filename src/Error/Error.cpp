//
// Created by yagdrassyl on 7/25/22.
//

#include "Error.h"
#include <string>
#include <utility>
namespace Game {
    char *getError(ERROR_TYPE type) {
        char *errors[] = {(char *) "sent info", (char *) "found fatal error", (char *) "panicked"};
        return errors[type];
    }

    ErrorSupport::ErrorSupport(StandardError* error, char * caller) {
        masterError = error;
        name = caller;
    }

    void ErrorSupport::setNewError(std::string error, ERROR_TYPE type) {
        if (masterError) {
            masterError->exists = true;
            masterError->message = std::move(error);
            masterError->caller = "";
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