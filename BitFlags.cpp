#include <iostream>
#include <bitset>

int main() {
    // Bit flags are collections of bits, so you can do easy bit manipulations
    std::bitset<8> myEmptyBitset{};
    std::bitset<8> myFullBitset{0xFF};
    std::cout << myEmptyBitset << " " << myFullBitset << "\n\n";

    // There are a few critical functions for bit manipulations
    // Positions start from 0 at least significant bit.
    // test() queries the value of a position
    // set() turns a bit to 1, reset() turns a bit to 0, flip() sets it to its opposite
    // Single quote can serve as a separator in a byte literal
    std::bitset<8> manipulationBitset{0b0000'0101};
    std::cout << manipulationBitset << "\n";
    std::cout << manipulationBitset.test(1) << "\n";
    manipulationBitset.set(4);
    manipulationBitset.reset(0);
    manipulationBitset.flip(5);
    manipulationBitset.flip(2);
    std::cout << manipulationBitset << "\n\n";

    // Bitwise operators are another way to modify bit flags
    // << and >> are left shift and right shift, respectively (they overload with output / input)
    // | is or, & is and, ^ is xor, ~ is not (separate from ||, &&, !=, and !)
    // They all have assignment variants
    std::bitset<8> operatorBitset{0b0011'1100};
    std::cout << operatorBitset << "\n";
    operatorBitset <<= 3;
    std::cout << operatorBitset << "\n";
    operatorBitset >>= 1;
    std::cout << operatorBitset << "\n";
    operatorBitset |= std::bitset<8>{0b0000'0011};
    std::cout << operatorBitset << "\n";
    operatorBitset &= std::bitset<8>{0b1111'0010};
    std::cout << operatorBitset << "\n";
    operatorBitset ^= std::bitset<8>{0b1010'1000};
    std::cout << operatorBitset << "\n";
    operatorBitset = ~operatorBitset;
    std::cout << operatorBitset << "\n";




    return 0;
}