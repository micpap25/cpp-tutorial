#include <iostream>
#include <limits>
#include <cassert> // for assertions
#include <cmath> // for std::sqrt
#include <string>
#include <iostream>
#include <iomanip> // For std::ws

double timeToGround(double gravity, double height) {
    
    // Use assertions for logically impossible situations
    assert (gravity > 0.0);
    
    // Use error handling for possible but concerning cases
    if (height <= 0) {
        return 0.0;
    }


    return (2.0 * height) / gravity;
}

int main() {
    double g{};
    std::cout << "Gravity Checker\nWhat is the gravity?\n";
    std::cin >> g;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    double h{};
    std::cout << "How high up is the object?\n";
    std::cin >> h;

    double t{timeToGround(g, h)};

    if (t <= 0) {
        std::cout << "Object is already on the ground\n";
    } else {
        std::cout << "Object falls in " << t << " seconds\n";
    }

    return 0;
}