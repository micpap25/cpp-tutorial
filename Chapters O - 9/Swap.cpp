#include <iostream>

int main() {
    int small{};
    int large{};

    std::cout << "Enter an integer\n";
    std::cin >> small;
    std::cout << "Enter a larger integer\n";
    std::cin >> large;

    if (small > large){
        std::cout << "Swapping the values\n";
        int temp{small};
        small = large;
        large = temp;
    }

    std::cout << "The smaller value is " << small << "\nThe larger value is " << large << "\n";

    return 0;
}