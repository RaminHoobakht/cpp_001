/* how using static variable and static method */

#include <iostream>

namespace cpp {

    class raphael final {

    private:
        int x_{};
        static int y_;

    public:
        raphael() noexcept { std::cout << "Hello, I am Raphael ... \n"; }

        [[maybe_unused]] void set_x(const int x) noexcept { this->x_ = x; }

        [[maybe_unused]] [[nodiscard]] int get_x() const noexcept { return this->x_; }

        [[maybe_unused]] [[nodiscard]] int get_y() const noexcept { return raphael::y_; }

        /* any static function can not have 'const' cv-qualifier */
        [[maybe_unused]] [[nodiscard]] static int static_get_y() noexcept { return raphael::y_; }

    };

    int raphael::y_ = 1001;

} // namespace cpp


int main() {

    cpp::raphael my_raphael{};

    my_raphael.set_x(120);
    std::cout << "value of x is: " << my_raphael.get_x() << '\n';
    std::cout << "value of y is: " << my_raphael.get_y() << '\n';

    std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    std::cout << "value of y is: " << my_raphael.static_get_y() << '\n';
    std::cout << "value of y is: " << cpp::raphael::static_get_y() << '\n';


    std::cout << "\n #(17:27:59): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
