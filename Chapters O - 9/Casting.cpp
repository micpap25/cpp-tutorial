#include <iostream>

int main() {
    // C++ will do automatic casting in many situations, so you can go up in complexity easily
    double a{1};
    double b{2.5f};
    std::cout << a << " and " << b << "\n";

    // If you use = to create a variable going DOWN in complexity, C++ will have to truncate data
    // int c = 2.5 gives a warning but compiles
    // int c{2.5} doesn't compile, which is why this declaration is preferred

    // For simple conversions in-line conversions, you can do C-style casting
    // However, the only benefit they provide is simpler looking code, so avoid them in most cases
    double c{(double)10 / 4};
    std::cout << c << "\n";

    // For most conversions, C++ style casting is preferred
    // The most basic C++ cast is static_cast, which is stricter and works on compile time
    double d{static_cast<double>(10) / 4};
    std::cout << d << "\n";

    return 0;
}