#include <iostream>

int main() {
    // Dynamic memory allocation is important for optimization, and is why pointers are important
    // Use the "new" keyword to allocate memory and the "delete" keyword to free it

    int* iptr{new int{6}};
    std::cout << iptr << " " << *iptr << "\n";
    delete iptr;

    // Now iptr is a dangling pointer, it points to an unknown re-allocated value. Be careful about this.
    std::cout << iptr << " " << *iptr << "\n";

    // To avoid this, always set pointers to nullptr after use unless they go out of scope.
    iptr = nullptr;

    // What happens if we call "new" when we are out of data? The program with throw a bad_alloc exception.
    // We can use std::nothrow to not throw this error and leave the data at nullptr

    int* exceptionptr{new (std::nothrow) int{3}};
    if (!exceptionptr) {
        std::cout << "We're out of memory!\n";
    } else {
        std::cout << *exceptionptr << "\n";
    }

    // Memory leaks occur when you fail to delete your pointers. 
    // You lose that memory and can't do anything about it, so always delete pointers.

    delete exceptionptr;

    // This is how you allocate space for arrays

    std::cout << "How long is this array?\n";
    int length{};
    std::cin >> length;
    
    int* array{new int[length]{}};
    array[0] = 5;
    std::cout << array[0] << "\n";

    // deleting the array
    delete[] array;
    array = nullptr;

    // Populating a dynamic array on instantiation
    int* newArray{new int[5]{1, 2, 3, 4, 5}};
    for (int i = 0; i < 5; i++){
        std::cout << newArray[i] << "\n";
    }

    delete[] newArray;
    newArray = nullptr;

    // You can also use const but I'm not going to do that here
}