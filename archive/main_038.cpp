#include <iostream>

namespace cns {
    static constexpr char nl{'\n'};
}

namespace cpp {

    class kevin final {

    private:
        int x_{};

    public:
        kevin() noexcept;
        kevin(const kevin &kvn) noexcept;
        ~kevin() noexcept;

        [[maybe_unused]] void set_x(const int x) noexcept;
        [[maybe_unused]] [[nodiscard]] int get_x() const noexcept;
        [[maybe_unused]] kevin &operator=(const kevin &kvn) noexcept;
    };

    /* --------------- */

    kevin::kevin() noexcept { std::cout << "this is default constructor ..." << cns::nl; }

    kevin::kevin(const kevin &kvn) noexcept {
        this->x_ = kvn.x_;
        std::cout << "this is copy constructors ..." << cns::nl;
    }

    kevin::~kevin() noexcept { std::cout << "Good Bay ..." << cns::nl; }

    void kevin::set_x(const int x) noexcept { this->x_ = x; }

    int kevin::get_x() const noexcept { return this->x_; }

    kevin &kevin::operator=(const kevin &kvn) noexcept {
        this->x_ = kvn.get_x();
        return *this;
    }

} /* end of namespace cpp */

int main() {

    cpp::kevin kvn1{};
    cpp::kevin kvn2{};

    kvn1.set_x(120);
    std::cout << "kvn1 x value is: " << kvn1.get_x() << cns::nl;

    kvn2 = kvn1;
    std::cout << "kvn2 x value is: " << kvn2.get_x() << cns::nl;

    std::cout << "\n #(09:29:58): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
