#include <iostream>

int foo() {
    return 1;
}
double goo(){
    return 2.1;
}
int hoo(int x){
    return x;
}

// function pointer parameter
int doSomethingWithTwoInts(int x, int y, int (*function)(int, int)){
    return function(x, y);
}
int addInts(int x, int y){
    return x + y;
}
int subtractInts(int x, int y){
    return x - y;
}

// implicit version of it
double makeDoubleFromInts(int x, int y, double function(int, int)){
    return function(x, y);
}



int main() {
    // Pointers to functions are useful
    int(*fooptr)(){&foo};
    double(*gooptr)(){&goo};
    int(*hooptr)(int){&hoo};
    auto fooptr2{&foo};

    // Call functions through pointers, either explicit or implicit dereference
    std::cout << (*fooptr)() << " " << hooptr(5) << "\n";

    // One big use for function pointers is passing functions to other functions
    // This adds flexibility to functions
    std::cout << doSomethingWithTwoInts(10, 7, addInts) << "\n";
    std::cout << doSomethingWithTwoInts(10, 7, subtractInts) << "\n";

    return 0;
}