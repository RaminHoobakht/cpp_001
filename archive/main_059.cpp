#include <iostream>

namespace cpp {

    class raphael final {

    private:
        static int x_;
        int y_{120};

    public:
        raphael()  noexcept { std::cout << "Hello, I am raphael ... \n"; }
        ~raphael() noexcept { std::cout << "Good Bay raphael ...\n"; }

        [[maybe_unused]] void print_raphael() const noexcept {
            
            /* access to the private static variable in owner class */
            std::cout << "    static variable x_: raphael::x_ -> " << raphael::x_ << '\n';

            /* access to the private non static variable in owner class */
            std::cout << "non static variable y_: raphael::y_ -> " << raphael::y_ << '\n';
            std::cout << "non static variable y_: this->y_    -> " << this->y_    << '\n';
        }
    };

    int raphael::x_ = 10;

} // namespace cpp


int main() {

    cpp::raphael my_raphael{};

    std::cout << "raphael value is: " << '\n';
    my_raphael.print_raphael();

    std::cout << "\n #(13:53:13): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
