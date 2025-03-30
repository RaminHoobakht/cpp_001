#include <iostream>

namespace cpp {

    class raphael {

    private:
        int x_{120};

        [[maybe_unused]] void print_x() const noexcept {
            std::cout << "value of x is: " << this->x_ << '\n';
        }

    public:
        int y_{220};
        [[maybe_unused]] void print_y() const noexcept {
            std::cout << "value of y is: " << this->y_ << '\n';
        }

    protected:
        int z_{320};
        [[maybe_unused]] void print_z() const noexcept {
            std::cout << "value of z is: " << this->z_ << '\n';
        }
    };


    class samuel : public raphael {

    public:
        [[maybe_unused]] void print() const noexcept {
            std::cout << "I am print function from Samuel class ...\n";
            std::cout << "value of y is: " << this->y_ << '\n';
            std::cout << "value of z is: " << this->z_ << '\n';
            this->print_y();
            this->print_z();
        }
    };
} // namespace cpp

int main() {

    cpp::samuel my_samuel{};

    std::cout << "Main: value of y is: " << my_samuel.y_ << '\n';
    my_samuel.print_y();
    my_samuel.print();


    std::cout << "\n #(22:36:42): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
