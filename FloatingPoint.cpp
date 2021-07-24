#include <iostream>
#include <iomanip> // Allows us to use output manipulators

int main() {
    // Integer outputs without any decimal places
    int a{3};
    std::cout << 5 << "\n";
    std::cout << a << "\n";
    std::cout << 2.0 << "\n";
    // This defaults to a double
    std::cout << 4.3 << "\n";

    // Float outputs with decimal places
    float b{4.3f};
    float c{6.0f};
    std::cout << 3.5 << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";

    // Default precision for floats is 6 decimal places

    std::cout << .333333333333333f << "\n";
    std::cout << .000009876654321f << "\n";
    std::cout << 987654.321f << "\n";

    // You can change the precision with output manipulators
    // Be aware that rounding errors can occur.

    std::cout << std::setprecision(10);
    std::cout << .333333333333333f << "\n";
    std::cout << .000009876654321f << "\n";
    std::cout << 987654.321f << "\n";

    // Use doubles instead

    double d{5.432100001};

    std::cout << d << "\n";

    return 0;
}