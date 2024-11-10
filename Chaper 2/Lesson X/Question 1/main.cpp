#include <iostream>

int readNumber();
void writeAnswer(int output);

int main()
{
    int num1 = readNumber();
    int num2 = readNumber();

    writeAnswer(num1 + num2);

    return 0;
}

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
