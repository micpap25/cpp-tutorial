#include <algorithm>
#include <array>
#include <iostream>

bool isEven(int n) {
    return n % 2 == 0;
}
bool lesser(int a, int b){
    return (a < b);
}
void triple(int& a){
    a * 3;
}
int main() {
    // std::find lets you find a value between an inclusive beginning and exclusive ending
    // if the value is not found, the ending is returned
    // otherwise, a pointer to the value is returned

    std::array<int, 5> array{1, 2, 3, 4, 5};
    for (auto i : array) {
        std::cout << i << ' ';
    }
    std::cout << "\n";

    std::cout << "Enter a value to swap to the front of my array\n";

    int i{};
    std::cin >> i;

    auto f{std::find(array.begin(), array.end(), i)};
    if (f == array.end()){
        std::cout << "Didn't find that\n";
    }
    else {
        int temp{array[0]};
        array[0] = *f;
        *f = temp;
    }
    for (auto i : array) {
        std::cout << i << ' ';
    }
    std::cout << "\n";

    // std::find_if is like std::find but instead calls a function

    std::cout << "I'm going to swap the first even value to the front.\n";

    f = std::find_if(array.begin(), array.end(), isEven);
    if (f == array.end()){
        std::cout << "Didn't find an even value\n";
    }
    else {
        int temp{array[0]};
        array[0] = *f;
        *f = temp;
    }
    for (auto i : array) {
        std::cout << i << ' ';
    }
    std::cout << "\n";

    // std::count and std::count_if are the same but return the number of counted values instead.

    std::cout << "There are " << std::count_if(array.begin(), array.end(), isEven) << " even numbers\n";

    // std::sort lets you custom sort
    std::cout << "Sorting from least to greatest\n";
    std::sort(array.begin(), array.end(), lesser);
    for (auto i : array) {
        std::cout << i << ' ';
    }
    std::cout << "\n";

    // std::for_each does something to each element
    std::cout << "Tripling everything\n";
    std::for_each(array.begin(), array.end(), triple);
    for (auto i : array) {
        std::cout << i << ' ';
    }
    std::cout << "\n";

    return 0;
}