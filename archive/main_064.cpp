#include <iostream>

typedef signed long long int lli_t;


class albert final {

private:
    int x_{};
    int y_{};

public:
    albert() noexcept { std::cout << "Hello Albert ...\n"; }

    ~albert() noexcept { std::cout << "Good Bye Albert ...\n"; }

    [[maybe_unused]] void init(const int x, const int y) noexcept {
        this->x_ = x;
        this->y_ = y;
    }

    [[maybe_unused]] [[nodiscard]] lli_t area() const noexcept { 
        lli_t a{static_cast<lli_t>(this->x_)};
        lli_t b{static_cast<lli_t>(this->y_)};
        return (a * b);
    }
};


int main() {

    void (albert::*fp)(int, int) noexcept{};
    fp = &albert::init;

    albert my_albert{};
    (my_albert.*fp)(120, 300);
    std::cout << "Area is: " << my_albert.area() << '\n';

    std::cout << "\n #(03:57:38): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
