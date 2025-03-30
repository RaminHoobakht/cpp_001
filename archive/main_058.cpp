#include <iostream>

namespace cpp {

    class raphael final {

    private:
        int x_{};

    public:
        raphael() noexcept { std::cout << "Hello, I am raphael ...\n"; }

        [[maybe_unused]] void set_x(const int x) noexcept { this->x_ = x; }

        [[maybe_unused]] [[nodiscard]] int get_x() const noexcept { return this->x_; }

        friend class samuel;


    }; // class raphael

    class samuel final {

    private:
        int y_{};

    public:
        samuel() noexcept { std::cout << "Hello, I am samuel ...\n"; }

        [[maybe_unused]] void set_y(const int y) noexcept { this->y_ = y; }

        [[maybe_unused]] [[nodiscard]] int get_y() const noexcept { return this->y_; }

        [[maybe_unused]] void print_values(const raphael &other) noexcept {
            std::cout << "value of x is: " << other.x_ << '\n';
            std::cout << "value of y is: " << this->y_ << '\n';
        }
    }; // class samuel

} // namespace cpp


int main() {


    cpp::raphael my_raphael{};
    cpp::samuel my_samuel{};

    my_raphael.set_x(150);
    my_samuel.set_y(320);

    my_samuel.print_values(my_raphael);

    std::cout << "\n #(21:21:26): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
