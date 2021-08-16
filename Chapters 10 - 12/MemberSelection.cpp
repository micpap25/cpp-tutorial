#include <iostream>

struct Date {
    int day{1};
    int month{1};
};

int main() {
    // You can do member selection with . using refs and structs

    Date a{4, 11};
    Date& b{a};
    Date* c{&a};

    // For references, just use . as well
    std::cout << a.month << " " << b.month << "\n";
    
    // For pointers, you can use . but there is a better way with ->
    // The following are equivalent
    std::cout << (*c).month << " " << c->month << "\n";

    return 0;
}