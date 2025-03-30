#include <iostream>

static constexpr auto nl{'\n'};

class raphael {

private:
  int x_{};

public:
  raphael() noexcept { std::cout << "I am default construcotr ..." << nl; }
  raphael(const raphael &other_raphael) noexcept {
    this->x_ = other_raphael.x_;
    std::cout << "I am copy constructor ..." << nl;
  }
  ~raphael() noexcept { std::cout << "Good Bay raphael ..." << nl; }

  [[maybe_unused]] void set_x(const int x) noexcept { this->x_ = x; }
  [[maybe_unused]] [[nodiscard]] int get_x() const noexcept { return this->x_; }
  raphael &operator=(const raphael &other_raphael) noexcept {
    std::cout << "operator overloading ..." << nl;
    this->x_ = other_raphael.get_x();
    return *this;
  }
};

int main() {

  raphael raph1{};

  raph1.set_x(120);
  std::cout << "raph1: " << raph1.get_x() << nl;

  raphael raph2{raph1};
  std::cout << "raph2: " << raph2.get_x() << nl;

  raphael raph3{};

  raph3 = raph2;
  std::cout << "raph3: " << raph3.get_x() << nl;

  std::cout << "\n #(22:17:57): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
