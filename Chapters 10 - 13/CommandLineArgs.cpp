#include <iostream>

// argc is the number of CLAs, argv is the list of them as C-style strings.
int main(int argc, char* argv[]){

    std::cout << argc << "\n";

    for (int i = 0; i < argc; i++){
        std::cout << argv[i] << "\n";
    }

    return 0;
}