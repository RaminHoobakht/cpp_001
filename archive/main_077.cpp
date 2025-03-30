#include <iostream>

namespace cpp {

    class raphael {

    public:
        int i{};
    };

    class samuel : public raphael {

    public:
        int i{};
    };

} // namespace cpp


int main() {

    cpp::raphael my_raphael1{};
    cpp::raphael my_raphael2{};
    cpp::samuel my_samuel{};
    
    my_raphael1.i = 1;
    my_samuel.raphael::i = 2;
    my_samuel.i = 3;
    my_raphael2 = static_cast<cpp::raphael>(my_samuel);

    std::cout << "raphael one i:     " << my_raphael1.i << '\n';
    std::cout << "raphael two i:     " << my_raphael2.i << '\n';
    std::cout << "samuel i     :     " << my_samuel.i << '\n';
    std::cout << "samuel->raphael i: " << my_samuel.raphael::i << '\n';

    std::cout << "\n #(03:32:22): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
