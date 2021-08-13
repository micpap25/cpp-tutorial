#define _USE_MATH_DEFINES // for M_PI

#include <iostream>
#include <cmath>

void myFunction(int& x);
void sinCos(double degrees, double& sin, double& cos);

int main() {
    // References are a third type of variable after normal variables and pointers
    // Use & to declare them like * with pointers

    int x{7};
    int& ref{x};

    std::cout << x << " " << ref << "\n";

    // References are mainly used for functions parameters
    // It improves performance and lets the function modify the variable

    myFunction(x);
    std::cout << x << " " << ref << "\n";

    // Another concept is out variables
    // These are variables that are only passed to be return values.

    double sin{};
    double cos{};
    double degrees{};
    std::cout << "Enter a number of degrees\n";
    std::cin >> degrees;

    sinCos(degrees, sin, cos);
    std::cout << sin << ", " << cos << "\n";
    
    return 0;
}

void myFunction(int& x) {
    x = 9;
}

void sinCos(double degrees, double& sin, double& cos) {
    double radians{degrees * M_PI / 180.0};
    sin = std::sin(radians);
    cos = std::cos(radians);
}