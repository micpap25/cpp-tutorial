#include <iostream>

// Templates are important for creating functions which can receive many types as parameters
// We define T to be a generic for any typename (class is functionally the same here, but a bit confusing
// because all types are accepted)

// Note that templates aren't functions, but rather function generators; they create functions in runtime.
template <typename T>
T min(T a, T b){
    return a < b ? a : b;
}

// What if we need multiple types? Here's one solution...
template<typename X, typename Y>
auto addDifferentTypes(X a, Y b) {
    return a + b;
}

// Here's a better shorthand for that, introduced in C++ 20
auto autoAddDifferentTypes(auto a, auto b)
{
    return a + b;
}

int main() {
    int a{1};
    int b{2};
    double c{3.1};
    double d{4.1};

    // (Check your C++ version like this)
    std::cout << __cplusplus << "\n";

    // You could be specific like this...
    std::cout << min<int>(a, b) << " and " << min<double>(c, d) << "\n";
    std::cout << min<double>(2, 4) << "\n";


    // But you can also do this...
    std::cout << min<>(3, 5) << "\n";
    
    // Or even this! This is preferred.
    std::cout << min(4, 6) << "\n";

    std::cout << addDifferentTypes(2, 4.5) << "\n";

    return 0;
}