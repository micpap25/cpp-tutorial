#include <iostream>
#include <iterator>
#include <utility>

int main() {
    int array[]{6, 3, 2, 9, 7, 1, 5, 4, 8};
    int size{std::size(array)};

    for (int i = size - 1; i >= 0; i--){
        for (int j = 0; j < i; j++){
            if (array[j] > array[j+1]){
                std::swap(array[j], array[j+1]);
            }
        }
    }
    
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
    
    return 0;
}