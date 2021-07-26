#include <cstdint>
#include <iostream>
 
int main() {
    // Create bit masks
	constexpr std::uint_fast8_t mask0{ 0b0000'0001 }; // represents bit 0
	constexpr std::uint_fast8_t mask1{ 0b0000'0010 }; // represents bit 1
	constexpr std::uint_fast8_t mask2{ 0b0000'0100 }; // represents bit 2 
	constexpr std::uint_fast8_t mask3{ 0b0000'1000 }; // represents bit 3
	constexpr std::uint_fast8_t mask4{ 0b0001'0000 }; // represents bit 4
	constexpr std::uint_fast8_t mask5{ 0b0010'0000 }; // represents bit 5
	constexpr std::uint_fast8_t mask6{ 0b0100'0000 }; // represents bit 6
	constexpr std::uint_fast8_t mask7{ 0b1000'0000 }; // represents bit 7
 
    // Create something to be masked
	std::uint_fast8_t flags{ 0b0000'0101 }; // 8 bits in size means room for 8 flags
 
    // Bitwise AND between chars returns an integer value, so if they have overlap it will say "on" (masking)
	std::cout << "bit 0 is " << ((flags & mask0) ? "on\n" : "off\n");
	std::cout << "bit 1 is " << ((flags & mask1) ? "on\n" : "off\n");
 
    // The equivalent to set() here is |=
    flags |= mask1; // turn on bit 1
    flags |= (mask4 | mask5); // turn bits 4 and 5 on at the same time

    std::cout << "bit 1 is " << ((flags & mask1) ? "on\n" : "off\n");
    std::cout << "bit 4 is " << ((flags & mask4) ? "on\n" : "off\n");
    std::cout << "bit 5 is " << ((flags & mask5) ? "on\n" : "off\n");

    // The equivalent to reset() here is &= and ~
    flags &= ~mask2;
    flags &= ~(mask4 | mask5); // turn bits 4 and 5 off at the same time

    std::cout << "bit 2 is " << ((flags & mask2) ? "on\n" : "off\n");
    std::cout << "bit 4 is " << ((flags & mask4) ? "on\n" : "off\n");
    std::cout << "bit 5 is " << ((flags & mask5) ? "on\n" : "off\n");

    // The equivalent to flip() here is ^=
    flags ^= mask2; // flip bit 2
    std::cout << "bit 2 is " << ((flags & mask2) ? "on\n" : "off\n");

    flags ^= mask2; // flip bit 2
    flags ^= (mask4 | mask5);
    std::cout << "bit 2 is " << ((flags & mask2) ? "on\n" : "off\n");

    // This is practical for saving space and being convinient when working with many booleans
    // Here are two main examples:
    // 1. Instead of storing 100 sets of 8 booleans, you can just store 100 instances of 1 bit-flag and mask over it
    // 2. Instead of passing 16 booleans to a function, you can pass a 4-bit bit-flag and mask over it

	return 0;
}