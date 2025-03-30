#include <iostream>

static constexpr auto nl{'\n'};

class mariam {

private:
  int x_{};

public:
  mariam() noexcept { std::cout << "I am default constructor ...\n"; }

  explicit mariam(const int x) noexcept {
    std::cout << "I am parameterized constructor ...\n";
    this->x_ = x;
  }

  mariam(const mariam &other) noexcept {
    std::cout << "I am copy constructor with const ...\n";
    this->x_ = other.x_;
  }

  mariam(mariam &other) noexcept {
    std::cout << "I am copy constructor without const ...\n";
    this->x_ = other.x_;
  }

  ~mariam() noexcept { std::cout << "Good Bay Mariam ...\n"; }

  [[maybe_unused]] void set_x(const int x) noexcept { this->x_ = x; }
  [[maybe_unused]] [[nodiscard]] int get_x() noexcept { return this->x_; }

  [[maybe_unused]] [[nodiscard]] mariam &
  operator=(const mariam &other) noexcept {
    std::cout << "Operator Overloading ...\n";
    this->x_ = other.x_;
    return *this;
  }
};

int main() {

  mariam mary1{120};
  std::cout << "Mary One: " << mary1.get_x() << nl;

  mariam mary2{};
  int r = (mary2 = mary1).get_x();
  std::cout << "Mary Two: " << mary2.get_x() << nl;
  std::cout << "R: " << r << nl;

  std::cout << "\n #(03:16:14): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
