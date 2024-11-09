#include <iostream> // Preprocessor directive
// iostream is needed to use std::cout

int main()
/*
 * All C++ programs need a function named "main" exactly.
 * This is the first function that will run when you execute a CPP program.
 * Everything between the curly braces is called Function body.
 */
{
    std::cout << "Hello world!";
    return 0;
    /*
     * Every program returns an integer which indicates whether it run successfully or not.
     * 0: Successful Execution
     * Anything else indicates something went wrong during the execution.
     */
}
