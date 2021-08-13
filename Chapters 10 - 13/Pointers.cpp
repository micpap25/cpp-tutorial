#include <iostream>

int main() {
    // & gives the reference (address) of a variable, * dereferences an address (gets the variable at that address)
    int x{1};
    std::cout << x << " " << &x << " " << *(&x) << "\n";

    // pointers are variables that hold addresses, they are marked because there is an * between the type and name
    int* ptr{&x};

    std::cout << ptr << "\n";

    // when initializing without something to set your pointer to, use nullptr
    int* nptr{nullptr};
    std::cout << nptr << "\n";

    // arrays are not pointers, but they decay into pointers in most cases
    int arr[5]{9, 7, 5, 3, 1};
    std::cout << *arr << "\n";
    *arr = 1;
    std::cout << arr[0] << "\n";

    // array indexing is also done through referencing because of address arithmetic
    // you can add to addresses to get the next address
    std::cout << &arr[1] << '\n';
    std::cout << arr+1 << '\n'; 

    std::cout << arr[1] << '\n';
    std::cout << *(arr+1) << '\n';

    // Lastly, you can have void pointers which can point to anything
    // However, deleting them causes unexpected and dangerous results
    void* viptr{&x};
    void* vaptr{&arr};

    std::cout << *(static_cast<int*>(viptr)) << " " << *(static_cast<int*>(vaptr)) << "\n";

    // Generally do not use them because they are most useful for passing multiple types to one function
    // And function overloading is a much better method of doing that.
    
    return 0;
}