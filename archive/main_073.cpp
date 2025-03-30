#include <iostream>

class raphael {

public:
    explicit raphael(const int x) noexcept {
        std::cout << "vaule of x is: " << x << '\n';
    }
};

class samuel : public raphael {

public:
    explicit samuel(int y) noexcept : raphael(++y) {
        std::cout << "value of y is: " << y << '\n';
    }
};

int main() {

    raphael my_raphael{3};
    samuel  my_samuel{3};

    std::cout << "\n #(06:58:50): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
