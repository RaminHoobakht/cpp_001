#include <iostream>

class raphael {

public:
    int a{};
};

class samuel : public raphael {

public:
    int b{};
};


int main() {
    
    raphael my_raphael{};
    samuel my_samuel{};
    
    my_raphael.a = 100;
    my_samuel.a = 200;
    my_samuel.b = 300;

    std::cout << my_raphael.a << '\n';
    std::cout << my_samuel.a << '\n';
    std::cout << my_samuel.b << '\n';


    std::cout << "\n #(09:30:16): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
