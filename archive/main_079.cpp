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
            return this->a_ * this->b;
        }
    };

    class samuel : public raphael {
    public:
        [[maybe_unused]] void set(const int n) noexcept {
            this->a_ = n;
        }
    };
}


int main() {
    cpp::samuel my_samuel{};

    //my_samuel.set(5);
    my_samuel.b = 2;


    std::cout << "\n #(07:31:16): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
