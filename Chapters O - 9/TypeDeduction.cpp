#include <iostream>

auto myCoolFunction(int a, double b, float c, int d) {
    return a + b + c + d;
}

int main() {
    // Type deduction can be performed with the auto keyword in place of type
    // Much prettier, more convinient, etc.
    // Use when possible

    auto a{1};
    auto b{2.5};
    auto c{5.6f};
    std::cout << a << " " << b << " " << c << "\n";

    // auto also removes const

    const int x{6};
    auto d{x};
    d++;
    std::cout << d << "\n";

    // auto also exists for functions, but this is NOT preferred because it reduces clarity
    // also you cannot forward declare them
    // using auto on function parameters will be covered in function templating

    std::cout << myCoolFunction(a, b, c, d);

    return 0;
}
