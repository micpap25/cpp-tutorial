#include <iostream>
#include <string>

int main() {
    // For each loops let you access each variable in a list
    // You can make this const, auto, and / or a reference for speed and ease purposes
    std::string grades[]{"A", "B", "C", "D", "F"};

    for ( std::string s : grades) {
        std::cout << s << " ";
    }
    std::cout << "\n";

    // As of C++20 you can also initialize an iterator at the start of a for each loop

    for (int i{0}; const auto &s : grades) {
        std::cout << s << i << " ";
        i++;
    }

    return 0;
}