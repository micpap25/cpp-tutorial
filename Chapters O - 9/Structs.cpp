#include <iostream>
#include <string>

// Structs are a user-defined datatype
// It can store data in an organized manner

struct Student {
    // Define data that will be part of the struct
    std::string name{};
    // You can give default values to non-static data
    int id{0};
    int year{1};
    double gpa{4.0};
};

// You can nest structs (structs in structs)

struct Grade {
    Student classCouncilPresident{};
    int year{};
    int numberOfStudents{0};
};

// You can pass structs in functions

void presidentGPA(Grade g) {
    std::cout << g.classCouncilPresident.gpa << "\n";
    if (g.classCouncilPresident.gpa < 3) {
        std::cout << "The class council president is slacking on classes and must be removed\n";
    }
    else {
        std::cout << "The class council president is a model student!\n";
    }
}

int main() {
    // You can define structs like this...
    Student a;
    a.name = "Alice";
    a.id = 12345;
    a.year = 1;
    a.gpa = 3.75;
    // But this is better
    Student b{"Bob", 54321, 3, 2.89};

    std::cout << b.id << "\n";

    Grade ga{a, a.year, 250};
    Grade gb{b, b.year, 276};

    presidentGPA(ga);
    presidentGPA(gb);

    return 0;
}