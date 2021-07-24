#include <iostream>

int getNum();
int addTen(int x);

int main() {
    int n{getNum()};
    std::cout << addTen(n);
    return 0;
}