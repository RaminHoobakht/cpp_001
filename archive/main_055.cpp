#include <iostream>

namespace {

class raphael final {

private:
  int x_{};

public:
  raphael() noexcept { std::cout << "x: " << this->x_ << '\n'; }

  [[maybe_unused]] void set_x(const int x) noexcept { this->x_ = x; }

  [[maybe_unused]] [[nodiscard]] int get_x() const noexcept { return this->x_; }
};

} // namespace

int main() {

  ::raphael my_raphael{};

  my_raphael.set_x(120);
  std::cout << "value of x is: " << my_raphael.get_x() << '\n';

  std::cout << "\n #(09:57:11): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
