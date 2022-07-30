//
// Created by yagdrassyl on 7/28/22.
//

#include "ConsoleMessage.h"
#include <iostream>

void ConsoleMessage::printMessage(char* level, char *message, Color color) {
    std::cout << "\033[" << color << "m" << level << "\033[" << RESET << "m" << message << std::endl;
}

void ConsoleMessage::info(char *message) {
    ConsoleMessage::printMessage((char*)"[\tINFO\t]\t", message, BLUE);
}

void ConsoleMessage::warning(char *message) {
    ConsoleMessage::printMessage((char*)"[\tWARNING\t]\t", message, YELLOW);

}

void ConsoleMessage::error(char *message) {
    ConsoleMessage::printMessage((char*)"[\tERROR\t]\t", message, RED);
}

void ConsoleMessage::info(const std::string& message) {
    ConsoleMessage::printMessage((char*)"[\tINFO\t]\t", (char *)message.c_str(), BLUE);
}

void ConsoleMessage::warning(const std::string& message) {
    ConsoleMessage::printMessage((char*)"[\tWARNING\t]\t", (char*)message.c_str(), YELLOW);

}

void ConsoleMessage::error(const std::string& message) {
    ConsoleMessage::printMessage((char*)"[\tERROR\t]\t", (char*)message.c_str(), RED);
}