#include <iostream>
#include <array>
#include <vector>

int main() {
    // C++ has two main collection types, std::array and std::vector
    // std::array is like a C style array
    // You must define type and number
    std::array<int, 3> aArray{1, 2, 3};

    // As of C++17 you can omit both (but not just one)
    std::array bArray{7, 5, 3, 1, -1};

    // As of C++20 you can use std::to_array to just inlcude type like a C array,
    // But that's expensive and not really necessary

    // You can index with either [] (faster) or .at (safer, throws error on out-of-bounds)
    // It has many other useful functions
    std::cout << aArray[2] << "\n";
    aArray = {5, 6, 7};
    std::cout << aArray.at(1) << "\n";
    std::cout << aArray.size() << "\n";
    // note that size() (number of elements) is different from sizeof(memory size)!

    for (auto i{0}; i < aArray.size(); i++){
        std::cout << i << " ";
    }
    std::cout << "\n";

    // std::array cleans itself up so no deleting is needed
    // Also, it should always be passed to functions as a ref for performance reasons
    // It does not decay when passed, so you can always call its functions
    // Lastly, when it is passed to a function, its type and size must be re-declared (or you can template that)

    // Vectors are extraordinarily useful because their size is determined at runtime
    std::vector<int> aVector{1, 2, 3, 4, 5, 6, 7};
    std::vector bVector{1.2, 2.3, 3.4};

    // All the properties of self-cleanup, indexing, and functions are the same. They also always know their own length.
    std::cout << aVector.size() << "\n";

    // Vectors can be resized to be shorter or longer. This is computationally expensive so
    // if you want them to be a certain size, define them like that
    aVector.resize(10);
    std::cout << aVector.size() << "\n";
    std::vector<int> cVector(5);
    for (auto i : cVector) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    

    return 0;
}