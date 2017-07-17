#include "print.h"
#include <stdio.h>
#include <string>

Print::Print() {}

Print::~Print() {}

void Print::printMessage(std::string message) {
    printf(message.c_str());
}