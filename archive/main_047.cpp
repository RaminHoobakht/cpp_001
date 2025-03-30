#include <iostream>
#include <print>

namespace cpp {

class raphael final {

private:
  int x_{};

public:
  raphael() noexcept;
  raphael(const int x) noexcept;
  raphael(const raphael &other) noexcept;
  ~raphael() noexcept;

  [[maybe_unused]] void set_x(const int x) noexcept;
  [[maybe_unused]] [[nodiscard]] int get_x() const noexcept;

  raphael &operator=(const raphael &other) noexcept;
  friend std::ostream &operator<<(std::ostream &out,
                                  const raphael &other) noexcept;
  operator int() const noexcept;
};

raphael::raphael() noexcept { std::cout << "I am default constructor ...\n"; }

raphael::raphael(const int x) noexcept { this->x_ = x; }

raphael::raphael(const raphael &other) noexcept { this->x_ = other.get_x(); }

raphael::~raphael() noexcept { std::cout << "Good Bay raphael ...\n"; }

void raphael::set_x(const int x) noexcept { this->x_ = x; }

int raphael::get_x() const noexcept { return this->x_; }

raphael &raphael::operator=(const raphael &other) noexcept {
  this->x_ = other.get_x();
  return *this;
}

raphael::operator int() const noexcept { return this->get_x(); }

std::ostream &operator<<(std::ostream &out, const raphael &other) noexcept {
  out << other.get_x();
  return out;
}

} // namespace cpp

int main() {

  const cpp::raphael ramin = 20;
  std::cout << "ramin value is: " << ramin << '\n';
  std::printf("ramin value is: %d\n", int(ramin));

  std::cout << "\n #(02:35:02): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
