#include <iostream>

class albert final {

private:
    int x_{};
    int y_{};
    friend void display(const albert &other);

public:
    albert() noexcept { std::cout << "Hello Albert ...\n"; }

    albert(const int x, const int y) noexcept {
        this->x_ = x;
        this->y_ = y;
        std::cout << "Hello Albert (p-c) ...\n";
    }

    ~albert() noexcept { std::cout << "Good Bye Albert ...\n"; }

    [[maybe_unused]] void set_x(const int x) noexcept { this->x_ = x; }

    [[maybe_unused]] void set_y(const int y) noexcept { this->y_ = y; }

    [[maybe_unused]] [[nodiscard]] int get_x() const noexcept { return this->x_; }

    [[maybe_unused]] [[nodiscard]] int get_y() const noexcept { return this->y_; }

    albert &operator=(const albert &rhs) noexcept {
        this->x_ = rhs.get_x();
        this->y_ = rhs.get_y();
        return *this;
    }
};

void display(const albert &other) {
    std::cout << "value of x is: " << other.x_ << '\n';
    std::cout << "value of y is: " << other.y_ << '\n';
}


int main() {

    albert my_albert{120, 400};

    display(my_albert);


    std::cout << "\n #(22:44:54): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
