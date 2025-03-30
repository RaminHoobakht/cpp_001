#include <iostream>

typedef unsigned long long int ull_t;

namespace cpp {

class hour final {

private:
  ull_t h_{};
  ull_t init(const ull_t h) noexcept;

public:
  hour() noexcept;
  hour(const ull_t h) noexcept;
  hour(const hour &other) noexcept;

  [[maybe_unused]] void set_h(const ull_t h) noexcept;
  [[maybe_unused]] [[nodiscard]] ull_t get_h() const noexcept;

  hour &operator=(const hour &other) noexcept;
  friend std::ostream &operator<<(std::ostream &out,
                                  const hour &other) noexcept {
    out << other.get_h();
    return out;
  }
};

hour::hour() noexcept {
  /* code */
  std::cout << "I am default constructor ...\n";
}

hour::hour(const ull_t h) noexcept {
  /* code */
  this->h_ = this->init(h);
}

hour::hour(const hour &other) noexcept {
  /* code */
  this->h_ = other.get_h();
}

ull_t hour::init(const ull_t h) noexcept {
  /* code */
  return h <= 24ULL ? h : 0ULL;
}

void hour::set_h(const ull_t h) noexcept {
  /* code */
  this->h_ = this->init(h);
}

ull_t hour::get_h() const noexcept {
  /* code */
  return this->h_;
}

hour &hour::operator=(const hour &other) noexcept {
  this->h_ = other.get_h();
  return *this;
}

} // namespace cpp

int main() {

  [[maybe_unused]] cpp::hour h = 20;
  std::cout << "current time is: " << h << '\n';

  std::cout << "\n #(05:43:56): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
