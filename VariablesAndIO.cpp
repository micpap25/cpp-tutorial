// Use funcitonality defined in the iostream part of the C++ standard library
#include <iostream>

int main() {
    // Define one variable
    double width;

    // Define many variables
    int a, b, c;

    // Assign variables
    width = 7.5;
    a = 2;
    b = 4;
    c = 6;
    a = 8;

    // Initialize variables
    int i = 1;
    int j{2};
    int k(3);
    int m{0}, n{};

    // Print to console. 

    std::cout << i;
    std::cout << j << k;
    std::cout << m << n << 4 << std::endl;
    std::cout << "Now I'm on a new line.\n";
    std::cout << "This time, with efficiency.\nOk, now enter a number.\n";

    // Get input from console.

    int x{};
    std::cin >> x;

    std::cout << "The number you inputted was " << x << ".\n";
    std::cout << "OK now give me two more (separated by a space)\n";
    
    int y{}, z{};
    std::cin >> y >> z;
    std::cout << "When you multiply them you get " << (y * z) << ".\n";

    return 0;
}