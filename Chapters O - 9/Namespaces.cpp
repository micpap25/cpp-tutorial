#include <iostream>
#include <string>

namespace one {
    void print(std::string str) {
        std::cout << str + " - Printed by the best namespace, one\n";
    }
    constexpr int favNumber = 1;
}

namespace two {
    namespace three {
        void print(std::string str) {
        std::cout << str + " - Printed by the REAL BEST namespace, TWO::THREE\n";
        }
        constexpr int favNumber = 3;
    }
    constexpr int favNumber = 2;
}

namespace thisIsARidiculouslyLongNamespaceWhyWouldYouEverUseThis {
    void print(std::string str) {
        std::cout << str + " - Printined by a namespace that is way too long" << "\n";
    }
    constexpr int favNumber = 100;
}

int main() {

    namespace shorterName = thisIsARidiculouslyLongNamespaceWhyWouldYouEverUseThis;

    std::string myString = "This is a nice string!";

    one::print(myString);
    two::three::print(myString);
    shorterName::print(myString);

    std::cout << "\n";
    std::cout << one::favNumber << "\n";
    std::cout << two::favNumber << "\n";
    std::cout << two::three::favNumber << "\n";
    std::cout << shorterName::favNumber << "\n";

    return 0;
}