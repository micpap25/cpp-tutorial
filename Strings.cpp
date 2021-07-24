#include <string> // For std::string and std::getline
#include <iostream>
#include <iomanip> // For std::ws

int main() {
    std::string empty{};

    std::string myName{"Michael"};
    std::string myNumber{"8"};

    std::cout << "My name is " + myName + "\n";

    // Strings break on whitespace for input, so use std::getline for full lines
    // std::ws is a input manipulator that tells the compiler to ignore leading whitespace

    std::string input{};
    std::cout << "Give me a string\n";
    std::getline(std::cin >> std::ws, input);
    std::cout << "Here's the string: " + input + "\n";

    return 0;
}