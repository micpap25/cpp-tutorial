#include <iostream>
#include <vector>

// implementation of memoized fibonacci in C++

int fib(int n){
    static std::vector<int> memo{0, 1};

    // cast to prevent type issues on certain architecture
    if (n < static_cast<int>(std::size(memo))){
        return memo[n];
    }
    else {
        int val{(fib(n - 1) + fib(n - 2))};
        memo.push_back(val);
        return val;
    }
}

int main() {
    for (int i = 0; i < 50; i++){
        std::cout << fib(i) << "\n";
    }
}