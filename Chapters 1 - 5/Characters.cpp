#include <iostream>
 
int main()
{
    char c{'a'};
    std::cout << c << '\n';
    std::cout << static_cast<int>(c) << '\n';
    std::cout << c << '\n';

    std::cout << "Do you like waffles? (y/n)\n";

    char ch{};
    std::cin >> ch;
    std::cout << static_cast<int>(ch) << " is it's ASCII value\n";

    return 0;
}