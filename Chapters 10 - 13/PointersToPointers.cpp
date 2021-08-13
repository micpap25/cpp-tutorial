#include <iostream>

int main() {
    // You can point to pointers
    int val{6};
    int* ptr{&val};
    int** ptrptr{&ptr};

    // You cannot set a pointer to a pointer directly to a value with && or anything

    // The simplest use for pointer-to-pointers is dynamic allocation of pointers

    int** aptrptr{new int*[10]};

    // Another is to make a two-dimensional array without compile-time constants
    // If your two-dimensional array is compile-time constant, just do this:
    // (auto will resolve to int (* name)[size])
    auto array{new int[10][4]};

    // If it isn't use pointers to pointers
    int** arr{new int*[10]};
    for (int i{0}; i < 10; i++) {
        arr[i] = new int[4];
    }

    for (int i{0}; i < 10; i++){
        for (int j{0}; j < 4; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    // Are these C style arrays annoying? We're moving to C++ arrays and vectors next.

    // You can do as many pointer-to-pointer-to-pointer-to... as you want but you rarely need that much indirection.

    return 0;
}