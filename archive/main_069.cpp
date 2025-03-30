#include <iostream>

class Raphael {
public:
    Raphael() noexcept { std::cout << 1 << '\n'; }
    ~Raphael() noexcept { std::cout << 2 << '\n'; }
};

class Samuel : Raphael {
public:
    Samuel() noexcept { std::cout << 3 << '\n'; }
    ~Samuel() noexcept { std::cout << 4 << '\n'; }
};

class Robert : public Samuel {
public:
    Robert() noexcept { std::cout << 5 << '\n'; }
    ~Robert() noexcept { std::cout << 6 << '\n'; }
};
int main() {

    Samuel samule{};

    std::cout << "\n #(18:36:15): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
