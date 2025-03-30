#include <iostream>

class Raphael {

public:
    int func_one(int n) noexcept { return n; }
};

class Samuel : public Raphael {

public:
    int func_two(int n) noexcept { return n; }
};

class Robert : public Samuel {

public:
    int func_three(int n) noexcept { return n; }
};

int main() {

    Robert robert{};

    std::cout << "function one  : " << robert.func_one(10) << '\n';
    std::cout << "function two  : " << robert.func_two(20) << '\n';
    std::cout << "function three: " << robert.func_three(30) << '\n';

    std::cout << "\n #(09:04:12): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
