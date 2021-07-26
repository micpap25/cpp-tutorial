#include <iostream>

// The function add is DECLARED here. This is called a function prototype.
int add(int x, int y);

int main() {

    int x{3};
    int y{4};

    // We can call add even though it isn't DEFINED because it is DECLARED.
    std::cout << "The sum of " << x << " and " << y << " is " << add(x, y) + "\n";

    return 0;
}

// The function add is DEFINED here. There can only be one DEFINITION of a function in each file.
int add(int x, int y) {
    return x + y;
}