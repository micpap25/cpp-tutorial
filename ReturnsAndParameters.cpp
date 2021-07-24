#include <iostream>

int getValueFromUser() {
    // Return a value from a function.
    std::cout << "Please input a number.\n";
    // This function's version of num enters scope.
    int num{};
    std::cin >> num;

    return num;
}
// This function's version of num leaves scope.

// Pass values to functions
void printValues(int a, int b) {
    std::cout << "Your lucky numbers are " << a << " and " << b;
}

// Return values from functions that you pass values to
int doubleNumber(int n) {
    return n * 2;
}

int tripleNumber(int n) {
    return n * 3;
}

int main(){

    // main's version of num enters scope.
    int num{getValueFromUser()};

    printValues(doubleNumber(num), tripleNumber(num));

    return 0;
}
// main's version of num leaves scope.