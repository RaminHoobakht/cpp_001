#include <iostream>

namespace cpp {

    class raphael {

    protected:
        int a_{120};

        raphael() noexcept { std::cout << "Hello Raphael ...\n"; }

        ~raphael() noexcept { std::cout << "Good Bye Raphael ...\n"; }

        [[maybe_unused]] void print() const noexcept {
            std::cout << "value of a is: " << this->a_ << '\n';
        }
    };


} // namespace cpp


int main() {

    cpp::raphael my_raphael{};


    std::cout << "\n #(09:12:18): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
