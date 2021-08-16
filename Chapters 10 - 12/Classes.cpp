#include <iostream>
#include <cassert>
#include <vector>

class Date {
public:
    int year{};
    int month{};
    int day{};

    void print()
    {
        std::cout << year << '/' << month << '/' << day << "\n";
    }
};

class Numbers {
private:
    std::vector<int> nums{};
    
public:
    void store(int n){
        nums.push_back(n);
    }
    std::vector<int> get(){
        return nums;
    }
};

class Time {
private:
    int hours;
    int minutes;
public:
    Time(int h = 0, int m=0){
        assert(h < 12);
        assert(m < 60);
        hours = h;
        minutes = m;
    }
    int getHours(){return hours;}
    int getMinutes(){return minutes;}
    void print(){
        std::cout << hours << ":" << minutes << "\n";
    }
};

int main() {
    // Classes are useful because they're similar to structs but have more structure
    // The big difference is that classes are inherently private and structs are inherently public
    // We can use access specifiers to say what can access things from our class
    // You can make things public, private, or protected

    Date today{2021, 8, 4};

    today.day = 16;
    today.print();

    // Using a pointer here for example's sake
    // Encapsulation is an important concept; 
    // Generally, make functions public and variables private
    // This makes changing things easier

    Numbers* numptr{new Numbers};
    numptr->store(5);

    for (int i : numptr->get()) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    // Constructors are functions defined in the class
    // They let you define how to make instances when you have values but private values exist

    Time t1;
    Time t2{10, 45};
    std::cout << t2.getHours() << "\n";
    t1.print();
    t2.print();

    return 0;
}