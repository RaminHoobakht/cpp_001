#include <iostream>

namespace cpp {
class raphael {

private:
  int x_{};
  int y_{};

public:
  raphael() noexcept;
  raphael(int x, int y) noexcept;
  raphael(const raphael &other) noexcept;
  ~raphael() noexcept;

  [[maybe_unused]] void set_x(int x) noexcept;
  [[maybe_unused]] void set_y(int y) noexcept;

  [[maybe_unused]] [[nodiscard]] int get_x() const noexcept;
  [[maybe_unused]] [[nodiscard]] int get_y() const noexcept;

  raphael &operator=(const raphael &other) noexcept;
};

raphael::raphael() noexcept {
  std::cout << "Hello, I am default constructor for raphael class ..." << '\n';
}

raphael::raphael(const int x, const int y) noexcept {
  this->x_ = x;
  this->y_ = y;
  std::cout << "Hello, I am parameterized constructor for raphael class ..."
            << '\n';
}

raphael::raphael(const raphael &other) noexcept {
  this->x_ = other.get_x();
  this->y_ = other.get_y();
}

raphael::~raphael() noexcept {
  std::cout << "I am destructor for raphael class ..." << '\n';
}

void raphael::set_x(const int x) noexcept { this->x_ = x; }

void raphael::set_y(const int y) noexcept { this->y_ = y; }

int raphael::get_x() const noexcept { return this->x_; }

int raphael::get_y() const noexcept { return this->y_; }

raphael &raphael::operator=(const raphael &other) noexcept {
  this->x_ = other.get_x();
  this->y_ = other.get_y();
  return *this;
}

} // namespace cpp

int main() {

  std::cout << "\n #(18:05:35): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
