#include <iostream>
#include <iterator> // for std::size

// changes persist through functions for arrays
void incrementArray(int a[]){
    for (int i = 0; i < 5; i++) {
        a[i] += 1;
    }
}

// pass as a const to prevent changes
void printArray(const int a[]){
    for (int i = 0; i < 5; i++) {
        std::cout << a[i] << "\n";
    }
}

int main() {
    int nums[5]{};
    for (int i = 0; i < 5; i++){
        nums[i] = i;
    }

    int primes[]{2, 3, 5, 7, 11};

    std::cout << "We've got " << std::size(primes) << " primes\n";

    printArray(primes);

    return 0;
}