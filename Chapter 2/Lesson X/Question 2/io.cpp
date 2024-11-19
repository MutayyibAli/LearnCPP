#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Enter an integer value:";

    int input{};
    std::cin >> input;

    return input;
}

void writeAnswer(int output)
{
    std::cout << "The answer is " << output << ".\n";
}
