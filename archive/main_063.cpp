#include <iostream>

class albert final {

private:
    int x_{120};
    int y_{200};

public:
    void display() const noexcept {
        std::cout << "value of x is: " << this->x_ << '\n';
        std::cout << "value of y is: " << this->y_ << '\n';
    };
};


int main() {

    albert my_albert{};
    int *p{};
    p = reinterpret_cast<int *>(&my_albert);

    std::cout << "value of x is: " << *p << '\n';

    p++;
    std::cout << "value of y is: " << *p << '\n';

    p--;
    *p = 500;
    p++;
    *p = 600;
    my_albert.display();

    std::cout << "\n #(11:01:46): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
