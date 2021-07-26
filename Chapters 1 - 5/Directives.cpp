#include <iostream>

#define PRINT_FIZZ

int main() {
    #ifdef PRINT_FIZZ
        std::cout << "Fizz!\n";
    #endif
    #ifndef PRINT_FIZZ
        std::cout << "No Fizz!\n";
    #endif
    #ifdef PRINT_BUZZ
        std::cout << "Buzz!\n";
    #endif
    #ifndef PRINT_BUZZ
        std::cout << "No Buzz!\n";
    #endif
}