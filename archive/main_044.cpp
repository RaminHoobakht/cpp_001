#include <iostream>

namespace cpp {

    class raphael {

    private:
        int a_{};
        int b_{};
        int c_{};
        int Volume() noexcept;

    public:
        raphael(const int a, const int b, const int c) noexcept;
        int volume() noexcept;
    };

    /* ----------------- */
    
    /* default constructor */
    raphael::raphael(const int a, const int b, const int c) noexcept : a_(a), b_(b), c_(c) {
        std::cout << "I am default constructor ..." << '\n';
    }
    
    /* Volume function with capital (V) in the private section */
    int raphael::Volume() noexcept { return (a_ * b_ * c_); }

    /* volume function in the public section */
    int raphael::volume() noexcept { return Volume(); }
} // namespace cpp


int main() {

    cpp::raphael raphael1{10, 20, 30};
    std::cout << "value of volume is: " << raphael1.volume() << '\n';

    std::cout << "\n #(20:58:20): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
