#include <iostream>

class samuel final {

private:
    int x_{};

public:
    explicit samuel(const int x) noexcept { this->x_ = x; }

    [[maybe_unused]] void print() const noexcept {
        std::cout << "x: " << x_ << '\n';
        std::cout << "this->x: " << this->x_ << '\n';
        std::cout << "(*this).x: " << (*this).x_ << '\n';
    }
};


int main() {


    samuel my_samuel{120};

    my_samuel.print();


    std::cout << "\n #(00:13:27): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
