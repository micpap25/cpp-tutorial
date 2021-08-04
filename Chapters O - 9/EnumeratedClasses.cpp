#include <iostream>

// Available as of C++11 
// Generally better than enumerated types
// Stricter rules on enums because they are part of classes


int main() {

    enum class Name {
        michael,
        stanley,
        rebecca,
        joseph,
        alan,
    };

    enum class Suit {
        clubs,
        spades,
        diamonds,
        hearts,
    };

    // As enums these would all implicitly resolve to integers so they would be comparable
    // As enum classes, they resolve as their class so they are not inter-comparable

    Name n{Name::stanley};
    Suit s{Suit::clubs};

    if (n == Name::michael) {
        std::cout << "Hey that's me\n";
    }
    else {
        std::cout << "That's not me\n";
    }

    // You can still cast them to ints
    std::cout << static_cast<int>(s) << "\n";

    return 0;
}