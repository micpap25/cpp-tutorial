#include <iostream>

int main() {
    std::cout << "Enter a number, please.\n";

    int num{};
    std::cin >> num;

    std::cout << "Twice that number is " << num * 2 << ".\nTriple that number is " << num * 3 << ".\nHave a good day.\n";

    return 0;
}