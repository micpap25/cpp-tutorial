#include <iostream>
#include <array>
#include <algorithm>
#include <functional>

int main(){
    // lambdas are functions you can define inline, such as in other functions' arguments
    auto mutliplyByTwo{
        [](int n){
            return n * 2;
        }
    };
    std::cout << mutliplyByTwo(5) << "\n";

    std::array<int, 6> nums{1, 3, 5, 6, 8, 9};

    // Count the number of evens in an array in just one line
    auto found{std::count_if(nums.begin(), nums.end(), [](int n){return n % 2 == 0 ? true : false;})};
    std::cout << "\n";

    // Lambda capturing is giving lambdas access to variables outside of its scope
    // These are const by default
    int width{5};
    int length{2};

    auto captureLambda{
        [width, length](int n){
            return width + length + n;
        }
    };
    std::cout << captureLambda(3) << "\n\n";

    // Or you can make stuff mutable to change it in the scope of the lambda

    auto capture2{
        [width, length](int n) mutable{
            width += 2;
            length += 2;
            std::cout << width << " " << length << "\n";
            return width + length + n;
        }
    };
    std::cout << capture2(3) << "\n";
    std::cout << width << " " << length << "\n\n";

    // You can pass by reference to change it universally
    
    auto capture3{
        [&width, &length](int n) {
            width += 2;
            length += 2;
            std::cout << width << " " << length << "\n";
            return width + length + n;
        }
    };
    std::cout << capture3(3) << "\n";
    std::cout << width << " " << length << "\n";

    // You can use = to give it access to all variables, or & to give it all references

    return 0;
}