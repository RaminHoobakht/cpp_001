#include <iostream>

static constexpr char nl{'\n'};

namespace cpp {

class raphael final {

private:
  int x_{};

public:
  raphael() noexcept;
  explicit raphael(const int x) noexcept;
  raphael(const raphael &other_raphael) noexcept;
  ~raphael() noexcept;

  [[maybe_unused]] void set_x(const int x) noexcept;
  [[maybe_unused]] [[nodiscard]] int get_x() const noexcept;

  raphael &operator=(const raphael &other_raphael) noexcept;
};

/* ---------------- */

cpp::raphael::raphael() noexcept {
  std::cout << "I am raphael object ..." << nl;
}

cpp::raphael::raphael(const int x) noexcept { this->x_ = x; }

cpp::raphael::raphael(const raphael &other_raphael) noexcept {
  this->x_ = other_raphael.get_x();
  std::cout << "I am copy constructor;" << nl;
}

cpp::raphael::~raphael() noexcept { std::cout << "Good Bay ..." << nl; }

void cpp::raphael::set_x(const int x) noexcept { this->x_ = x; }

int cpp::raphael::get_x() const noexcept { return this->x_; }

raphael &cpp::raphael::operator=(const raphael &other_raphael) noexcept {
  this->x_ = other_raphael.get_x();
  return *this;
}

} // namespace cpp

/* ---------------------------- */

int main() {

  cpp::raphael raph1{};
  cpp::raphael raph2{};

  raph1.set_x(120);
  std::cout << "rapha1 x value is: " << raph1.get_x() << nl;

  raph2 = raph1;
  std::cout << "rapha2 x value is: " << raph2.get_x() << nl;

  std::cout << "\n #(18:06:51): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
