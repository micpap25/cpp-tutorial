#include <iostream>
#include <cstdlib> // for randomness
#include <ctime> // for time
#include <random> // for the really good randomness

int main() {
    // Bad randomness; start with the same seed every time
    std::srand(12345);
    // Toss out one random number at the start because it's better for some compilers
    std::rand();
 
    for (int i{}; i < 100; i++)
    {
        std::cout << std::rand() << '\t';
 
        if (i % 10 == 0)
            std::cout << '\n';
	}

    // Good randomness; start with a seed based on time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    std::rand();

    for (int i{}; i < 100; i++)
    {
        std::cout << std::rand() << '\t';
 
        if (i % 10 == 0)
            std::cout << '\n';
	}

    // Best randomness; use the random library

    std::mt19937 mersenneTwister{static_cast<std::mt19937::result_type>(std::time(nullptr))};
    // The former is for C++17 and beyond
    std::uniform_int_distribution cards{1, 13};
    std::uniform_int_distribution<> example{6, 904};

    for (int i{}; i < 100; i++)
    {
        std::cout << cards(mersenneTwister) << '\t';

        if (i % 10 == 0)
            std::cout << '\n';
	}


    return 0;
}