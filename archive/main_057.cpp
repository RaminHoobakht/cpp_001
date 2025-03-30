#include <iostream>

namespace cpp {

    class rectangle final {

    private:
        int x_{};
        int y_{};
        friend int area(const rectangle &rhs);

    public:
        rectangle() noexcept;
        rectangle(int x, int y) noexcept;

        [[maybe_unused]] void set_x(int x) noexcept;
        [[maybe_unused]] void set_y(int y) noexcept;

        [[maybe_unused]] [[nodiscard]] int get_x() const noexcept;
        [[maybe_unused]] [[nodiscard]] int get_y() const noexcept;

        rectangle &operator=(const rectangle &rhs) noexcept;
    };

    rectangle::rectangle() noexcept { std::cout << "Hello I am rectangle ...\n"; }

    rectangle::rectangle(const int x, const int y) noexcept {
        this->x_ = x;
        this->y_ = y;
    }

    void rectangle::set_x(const int x) noexcept { this->x_ = x; }

    void rectangle::set_y(const int y) noexcept { this->y_ = y; }

    int rectangle::get_x() const noexcept { return this->x_; }

    int rectangle::get_y() const noexcept { return this->y_; }

    rectangle &rectangle::operator=(const rectangle &rhs) noexcept {
        this->x_ = rhs.get_x();
        this->y_ = rhs.get_y();
        return *this;
    }

    int area(const rectangle &rhs) { return rhs.get_x() * rhs.get_y(); }


} // namespace cpp


int main() {

    cpp::rectangle my_rectangle{10, 20};

    int result{area(my_rectangle)};
    std::cout << "value of result is: " << result << '\n';


    std::cout << "\n #(15:48:21): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
