#include <iostream>

void printMoreInfo() {
    std::cout << "This is the function printMoreInfo()\n";
}

void printInfo() {
    std::cout << "This is the function printInfo()\n";

    // Calling functions in other functions. 

    printMoreInfo();
}

int main() {
    // Calling functions.

    std::cout << "Starting the program in function main()\n";
    printInfo();
    printInfo();
    std::cout << "Ending the program in function main()\n";

    // You cannot define functions in other functions.

    return 0;
}