#include <iostream>

namespace cpp {

class raphael final {
    
    private:
        int x_{};
        static int y_;
    
    public:
        raphael(const int x, const int y) noexcept {
            this->x_ = x;
            this->y_ = y;
        }
        
       void print_raphael1() noexcept {
            std::cout << "print raphael one-> value of x is: " << raphael::x_ << '\n';
            std::cout << "print raphael one-> value of y is: " << raphael::y_ << '\n';
        }

        static void print_raphael2() noexcept {
            //std::cout << "print raphael two-> value of x is: " << this->x_ << '\n';
            std::cout << "print raphael two-> value of y is: " << raphael::y_ << '\n';
        }
        
};

    int cpp::raphael::y_;

} /* end of namespace */

int main() {

    cpp::raphael my_raphael{120, 220};
    
    my_raphael.print_raphael1();
    cpp::raphael::print_raphael2();
    
    std::cout << "\n #(22:30:21): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
