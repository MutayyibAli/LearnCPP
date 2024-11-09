#include <iostream>

// Pint 3 integers entered by the user.
int main()
{
    int x{};
    int y{};
    int z{};

    std::cout << "Enter three number: ";
    std::cin >> x >> y >> z;

    std::cout << "You entered "
              << x << ", "
              << y << ", "
              << z << ".\n";

    return 0;
}
