#include <iostream>

class raphael {

public:
    raphael() noexcept { std::cout << 'a'; }

    ~raphael() noexcept { std::cout << 'b'; }
};

/* ------------------------- */

class samuel : public raphael {

public:
    samuel() noexcept { std::cout << 'c'; }

    ~samuel() noexcept { std::cout << 'd'; }
};

int main() {
    raphael my_raphael{};
    samuel my_samuel{};

    //std::cout << "\n #(07:12:44): The End ..." << std::endl;
    //aacdbb
    return (EXIT_SUCCESS);
}
