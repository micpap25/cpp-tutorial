#include <iostream>
#include <string>
#include <string_view>

int main() {
    // use string_view instead of string for string consts, it improves speed and memory
    // Rather than make a new string, it looks at an existing string
    // They can be converted to strings with static cast
    std::string one{"Hello!"};
    std::string_view two{one};
    const std::string_view three{two};
    std::cout << one << " " << two << " " << three << "\n";

    // They have fixed length, so this will not get all the characters
    one = "Goodbye!";
    std::cout << one << " " << two << " " << three << "\n";

    // here are some useful string functions
    std::cout << one.length() << " is the length, and the first five characters are: " << one.substr(0, 5) << "\n";

    // new as of C++20
    std::cout << one.starts_with("Goo") << '\n';
    std::cout << one.ends_with("lo!") << '\n';

    // masking a string_view manually
    two.remove_prefix(2);
    two.remove_suffix(3);
    std::cout << two;

    return 0;
}