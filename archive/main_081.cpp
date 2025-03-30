#include <iostream>

namespace cpp {

    class raphael {

    protected:
        int a_{};
        int b_{};

        [[maybe_unused]] [[nodiscard]] int func_add() const noexcept {
            return this->a_ + this->b_;
        }

        [[maybe_unused]] [[nodiscard]] int func_subtract() const noexcept {
            return this->a_ - this->b_;
        }

    public:
        int c{};

        raphael() noexcept {
            std::cout << "Hello Raphael ...\n";
        }

        ~raphael() noexcept {
            std::cout << "Good Bye Raphael ...\n";
        }

        [[maybe_unused]] [[nodiscard]] int func_one() const noexcept {
            return this->a_ + this->b_ + this->c;
        }

        [[maybe_unused]] void set(const int a, const int b) noexcept {
            this->a_ = a;
            this->b_ = b;
        }
    };

} // namespace cpp


int main() {

    cpp::raphael my_raphael{};

    my_raphael.set(10, 20);
    my_raphael.c = 30;

    int result = my_raphael.func_one();
    std::cout << "result is: " << result << '\n';

    std::cout << "\n #(04:43:24): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
