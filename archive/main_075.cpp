#include <iostream>

class raphael {

public:
    int i{};
};


class samuel : public raphael {

public:
    int i{};
};


int main() {
    
    raphael my_raphael1{};
    raphael my_raphael2{};

    my_raphael1.i = 1;

    samuel my_samuel{};

    my_samuel.raphael::i = 20;
    my_samuel.i = 3;

    my_raphael2 = static_cast<raphael>(my_samuel);
    
    std::cout << "raphael one: " << my_raphael1.i << '\n';
    std::cout << "raphael two: " << my_raphael2.i << '\n';
    std::cout << "samuel     : " << my_samuel.i << '\n';



    std::cout << "\n #(07:22:52): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
