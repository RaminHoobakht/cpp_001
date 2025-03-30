#include <iostream>

class Raphael {

protected:
    int x_{};

public:
    explicit Raphael(const int x) noexcept {
        this->x_ = x;
        std::cout << x + 1;
    }
};

class Samuel : public Raphael {

public:
    explicit Samuel(const int y) noexcept: Raphael(y) {
        std::cout << this->x_ - 1;
    }
};


int main() {
    Samuel samuel{3};

    std::cout << "\n #(21:03:49): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
