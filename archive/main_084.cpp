#include <iostream>

namespace cpp {

    class raphael {

    protected:
        int x_{};

    public:
        [[maybe_unused]] void set_b(const int n) noexcept { this->x_ = n; }

        [[maybe_unused]] void f() const noexcept {
            std::cout << "Raphael" << '\n';
        }
    };

    class samuel : public raphael {

    protected:
        int x1_{};

    public:
        [[maybe_unused]] void set1(const int n) noexcept { this->x1_ = n; }

        [[maybe_unused]] void f1() const noexcept {
            std::cout << "Samuel" << '\n';
        }
    };

    class robert : public samuel {

    protected:
        int x2_{};

    public:
        [[maybe_unused]] void set2(const int n) noexcept { this->x2_ = n; }

        [[maybe_unused]] void f2() const noexcept {
            std::cout << "Robert" << '\n';
        }
    };

    class albert : public robert {

    protected:
        int x3_{};

    public:
        [[maybe_unused]] void set3(const int n) noexcept { this->x3_ = n; }

        [[maybe_unused]] void f3() const noexcept {
            std::cout << "Albert" << '\n';
        }

        [[maybe_unused]] [[nodiscard]] int k() const noexcept {
            return (this->x3_ + this->robert::x2_ + this->samuel::x1_ +
                    this->raphael::x_);
        }
    };

} // namespace cpp


int main() {

    cpp::albert my_albert{};


    my_albert.raphael::set_b(1);
    my_albert.samuel::set1(2);
    my_albert.robert::set2(3);
    my_albert.albert::set3(4);

    std::cout << my_albert.k() << '\n';

    my_albert.f();
    my_albert.f1();
    my_albert.f2();
    my_albert.f3();

    std::cout << "\n #(09:10:27): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
