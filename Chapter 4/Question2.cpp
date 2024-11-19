#include <iostream>

double getDouble();
char getChar();
void printResult(double num1, char operation, double num2);

int main()
{
    double num1{getDouble()};
    double num2{getDouble()};

    char symbol{getChar()};

    printResult(num1, symbol, num2);

    return 0;
}

double getDouble()
{
    std::cout << "Enter a double value: ";
    double input{0};
    std::cin >> input;
    return input;
}

char getChar()
{
    std::cout << "Enter +, -, *, or /: ";
    char input{};
    std::cin >> input;
    return input;
}

void printResult(double num1, char operation, double num2)
{
    double result{};

    if (operation == '+')
        result = num1 + num2;
    else if (operation == '-')
        result = num1 - num2;
    else if (operation == '*')
        result = num1 * num2;
    else if (operation == '/')
        result = num1 / num2;

    std::cout << num1 << ' ' << operation << ' ' << num2 << " is " << result;
}
