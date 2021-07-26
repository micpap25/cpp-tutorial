#include <iostream>
 
int main()
{
    constexpr double gravity { 9.8 }; // ok, the value of 9.8 can be resolved at compile-time
    constexpr int sum { 4 + 5 }; // ok, the value of 4 + 5 can be resolved at compile-time
 
    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;
 
    const int myAge { age }; // cannot be constexpr because it cannot be resolved at compile time

    std::cout << gravity * myAge;
 
    return 0;
}