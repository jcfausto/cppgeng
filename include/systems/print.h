#ifndef SYSTEMS_PRINT_H
#define SYSTEMS_PRINT_H

#include <string>

class Print {
    public:
        Print();
        virtual ~Print();
        void printMessage(std::string message);
};

#endif /* SYSTEMS_PRINT_H */
