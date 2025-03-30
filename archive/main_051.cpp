#include <iostream>

namespace cpp {

    class raphael final {
        
        public:
            
            static const int x_ = 10;
            //static int x_ = 10;
            
            raphael() noexcept {
                //raphael::x_++;
            }
    };
    
    //int raphael::x_;
}


int main() {

    cpp::raphael my_raphael1{};
    std::cout << "value of x is: " << cpp::raphael::x_ << '\n';

    cpp::raphael my_raphael2{};
    std::cout << "value of x is: " << cpp::raphael::x_ << '\n';


    std::cout << "\n #(00:51:55): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
