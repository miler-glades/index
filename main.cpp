#include <iostream>
#include "functions.h" // Include the header file

int main() {
    std::cout << "This is the main file." << std::endl;

    // Call a function defined in another file
    printMessageFromFunctions();

    return 0;
}
