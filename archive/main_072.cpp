#include <iostream>

namespace cpp {

    class raphael {

    protected:
        int x_{};

    public:
        explicit raphael(const int x) noexcept {
            /* code */
            this->x_ = x;
        }

        [[maybe_unused]] void set_x(const int x) noexcept {
            /* code */
            this->x_ = x;
        }

        [[maybe_unused]] [[nodiscard]] int get_x() const noexcept {
            return this->x_;
        }

        raphael &operator=(const raphael &rhs) noexcept {
            this->x_ = rhs.get_x();
            return *this;
        }
    };


} // namespace cpp


int main() {
    
    cpp::raphael my_raphael{120};

    std::cout << "\n #(01:46:08): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
