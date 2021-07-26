#include <iostream>

int main() {
    std::cout << true << "\n";
    std::cout << !true << "\n";

    std::cout << std::boolalpha; // print bools as true or false

    std::cout << false << "\n";
    std::cout << !false << "\n";
    
    bool a{1};
    bool b{0};
    std::cout << a << "\n";
    std::cout << b << "\n";

    std::cout << std::noboolalpha;

    std::cout << (a == b) << "\n";

    int x{};
    std::cout << "Bubble, Trouble, Stockhom and Rio,\nGive me a number (please don't make it zero)\n";
    std::cin >> x;

    if (x == 0)
        std::cout << ":(\n";
    else if (x > 0)
        std::cout << ":)\n";
    else 
        std::cout << ":/\n";
    
    return 0;
}