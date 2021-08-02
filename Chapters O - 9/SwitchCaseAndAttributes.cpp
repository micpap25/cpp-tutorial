#include <iostream>

int main() {
    int x{};
    std::cout << "Enter a number\n";
    std::cin >> x;

    switch(x) {
        case 1:
            std::cout << "Breaking here\n";
            break;
        case 2:
            std::cout << "Falling through with an error here\n";
        case 3:
            std::cout << "Using an attribute to tell the compiler that we're falling through intentionally here\n";
            __fallthrough
            // Which is equivalent to [[fallthrough]]
        case 4:
            std::cout << "Ending here\n";
            break;
        default:
            std::cout << "Default Case";
    }

    return 0;
}