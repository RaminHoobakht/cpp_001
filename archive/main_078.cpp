#include <iostream>

namespace cpp {

    class raphael {
    public:
        int a{};
        int b{};
        [[maybe_unused]] int func_one() noexcept { return this->a + this->b; }
    };

    class samuel : public raphael {

    public:
        int c{};
        [[maybe_unused]] int func_two() noexcept {
            return this->func_one() + this->c;
        }
    };


} // namespace cpp


int main() {

    cpp::samuel my_sameul{};
    my_sameul.a = 2;
    my_sameul.b = 3;
    my_sameul.c = 4;

    std::cout << "func two invocatino: " << my_sameul.func_two() << '\n';


    std::cout << "\n #(08:37:55): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
