#include <iostream>

namespace cpp {

    class raphael {

    private:
        int a_{};

    public:
        int b{};

        [[maybe_unused]] void set_a(const int n) noexcept { this->a_ = n; }
        [[maybe_unused]] void set_b(const int n) noexcept { this->b = n; }
    };

    class samuel {

    public:
        int c{};
    };

    class albert : public raphael, public samuel {

    public:
        int d{};
    };

} // namespace cpp


int main() {

    cpp::albert my_albert{};

    /* encountered witd error. because variable a is private */
    // my_albert.a_ = 1;

    my_albert.set_a(110);
    my_albert.set_b(120);
    my_albert.c = 220;
    my_albert.d = 320;

    int result{my_albert.b + my_albert.c + my_albert.d};
    std::cout << "value of result is: " << result << '\n';

    std::cout << "\n #(07:55:11): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
