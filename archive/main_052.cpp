#include <iostream>

namespace cpp {

    class raphael final {

    private:
        static int x_;

    public:
        raphael() noexcept = default;

        static void init(const int x) noexcept { raphael::x_ = x; }

        static void print_raphael() noexcept { std::cout << "value of x is: " << raphael::x_ << '\n'; }
    };

    int raphael::x_ = 0;

} // namespace cpp

int main() {

    cpp::raphael::init(500);
    cpp::raphael::print_raphael();

    std::cout << "\n #(01:12:22): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
