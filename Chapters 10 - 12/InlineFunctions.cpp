#include <iostream>

inline double halfInt(int k){
    return k / 2.0;
}

int main() {
    // Inline functions are compiled NOT as functions
    // This saves time & space for very short and repeated functions
    std::cout << halfInt(4) << " " << halfInt(7) << " " << halfInt(5332534) << "\n";
}