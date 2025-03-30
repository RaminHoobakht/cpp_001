#include <iostream>

namespace cpp {

    class raphael final {
    private:
        int x_{};

    public:
        raphael() noexcept { std::cout << "Hello, I am raphael " << '\n'; }

        [[maybe_unused]] void set_x(const int x) noexcept { this->x_ = x; }

        [[maybe_unused]] [[nodiscard]] int get_x() const noexcept { return this->x_; }
    };

} // namespace cpp

int main() {

    cpp::raphael my_raphael{};

    my_raphael.set_x(120);
    std::cout << "value of x is: " << my_raphael.get_x() << '\n';

    std::cout << "\n #(10:37:56): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
