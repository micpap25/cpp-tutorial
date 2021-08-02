#include <iostream>

void incAndPrint() {
    int var{1};
    var++;
    std::cout << var << "\n";
}

void staticIncAndPrint() {
    static int s_var{1};
    s_var++;
    std::cout << s_var << "\n";
}

int main() {
    incAndPrint();
    incAndPrint();
    incAndPrint();
    std::cout << "\n";
    staticIncAndPrint();
    staticIncAndPrint();
    staticIncAndPrint();

    return 0;
}