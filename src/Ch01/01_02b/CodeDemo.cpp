// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 


//  Example One
/*
// First Example for "Hello, World!"

#include <iostream>             // Directive (always start with a #)

int main()                      // Main function for the code
{
    std::cout << "Hi There!" << std::endl;      // Statements always end with a semicolon (;)

    std::cout << std::endl << std::endl;
    return 0;                   // return 0 means no errors came in the program. Ends main function
}
*/

//  Example Two
/*
// Second example for "Hello, World!"
#include <cstdio>

int main()
{
    printf("Hey, there!\n");
    return 0;
}
*/

//  Example Three
/*
#include <iostream>

int main(int argc, char* argv[]) // argc = integer that represents the number of command line arguments passed to the program. argv = array of C-style strings representing those arguments
{
    std::cout << "Hi There!" << std::endl;
    return 0;
}
*/