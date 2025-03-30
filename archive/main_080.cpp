#include <iostream>

namespace cpp {

    class raphael {

    protected:
        int a_{};

    public:
        int b{};

        [[maybe_unused]] [[nodiscard]] int func_one() const noexcept {
            return this->b * this->b;
        }

        [[maybe_unused]] [[nodiscard]] int func_two() const noexcept {
            return this->a_ + this->b;
        }
    };

    class samuel : public raphael {

    public:
        [[maybe_unused]] void set(const int n) noexcept { this->a_ = n; }
    };


} // namespace cpp


int main() {

    cpp::samuel my_samuel{};
    my_samuel.b = 5;
    my_samuel.set(3);

    int result1 = my_samuel.func_one();
    int result2 = my_samuel.func_two();

    std::cout << "value of func_one is: " << result1 << '\n'; // 25
    std::cout << "value of func_two is: " << result2 << '\n'; // 8


    std::cout << "\n #(04:27:55): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
