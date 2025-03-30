#include <cstring>
#include <format>
#include <iostream>

namespace cpp {

typedef unsigned long long int ull_t;

class hour final {

private:
  ull_t h_{};
  static ull_t init(const ull_t h) noexcept { return h <= 24 ? h : 0; }

public:
  hour() = default;

  hour(const ull_t h) noexcept {
    /* code */
    this->h_ = hour::init(h);
  }

  hour(const hour &rhs) noexcept {
    /* code */
    this->h_ = rhs.get_hour();
  }

  [[maybe_unused]] void set_hour(const ull_t h) noexcept {
    /* code */
    this->h_ = h;
  }

  [[maybe_unused]] [[nodiscard]] ull_t get_hour() const noexcept {
    /* code */
    return this->h_;
  }

  hour &operator=(const hour &rhs) noexcept {
    this->h_ = rhs.get_hour();
    return *this;
  }

  operator unsigned long long int() noexcept {
    /* code */
    return this->get_hour();
  }

  friend std::ostream &operator<<(std::ostream &out, const hour &rhs) noexcept {
    /* code */
    out << rhs.get_hour();
    return out;
  }
};

/* --------------- */

class minute final {

private:
  ull_t m_{};
  static ull_t init(const ull_t m) noexcept { return m <= 59 ? m : 0; }

public:
  minute() = default;

  minute(const ull_t m) noexcept {
    /* code */
    this->m_ = minute::init(m);
  }

  minute(const minute &rhs) noexcept {
    /* code */
    this->m_ = rhs.get_minute();
  }

  [[maybe_unused]] void set_minute(const ull_t m) noexcept {
    /* code */
    this->m_ = m;
  }

  [[maybe_unused]] [[nodiscard]] ull_t get_minute() const noexcept {
    /* code */
    return this->m_;
  }

  minute &operator=(const minute &rhs) noexcept {
    this->m_ = rhs.get_minute();
    return *this;
  }

  operator unsigned long long int() noexcept {
    /* code */
    return this->get_minute();
  }

  friend std::ostream &operator<<(std::ostream &out,
                                  const minute &rhs) noexcept {
    /* code */
    out << rhs.get_minute();
    return out;
  }
};

/* --------------- */

class second final {
private:
  ull_t s_{};
  static ull_t init(const ull_t s) noexcept { return s <= 59 ? s : 0; }

public:
  second() = default;

  second(const ull_t s) noexcept {
    /* code */
    this->s_ = second::init(s);
  }

  second(const second &rhs) noexcept {
    /* code */
    this->s_ = rhs.get_second();
  }

  [[maybe_unused]] void set_second(const ull_t s) noexcept {
    /* code */
    this->s_ = s;
  }

  [[maybe_unused]] [[nodiscard]] ull_t get_second() const noexcept {
    /* code */
    return this->s_;
  }

  second &operator=(const second &rhs) noexcept {
    this->s_ = rhs.get_second();
    return *this;
  }

  operator unsigned long long int() noexcept {
    /* code */
    return this->get_second();
  }

  friend std::ostream &operator<<(std::ostream &out,
                                  const second &rhs) noexcept {
    /* code */
    out << rhs.get_second();
    return out;
  }
};

/* --------------- */

class my_time final {

private:
  hour hour_{};
  minute minute_{};
  second second_{};

public:
  my_time() noexcept { std::cout << "This is my default constructor\n"; }

  my_time(const ull_t hour, const ull_t minute, const ull_t second) noexcept {
    this->hour_ = hour;
    this->minute_ = minute;
    this->second_ = second;
  }

  my_time(const my_time &rhs) noexcept {
    this->hour_ = rhs.hour_;
    this->minute_ = rhs.minute_;
    this->second_ = rhs.second_;
  }

  void print_universal() noexcept {
    ull_t h{this->hour_.get_hour()};
    ull_t m{this->minute_.get_minute()};
    ull_t s{this->second_.get_second()};
    std::string result{std::format("{:02}:{:02}:{:02} \n", h, m, s)};
    std::cout << result;
  }

  void print_standard() noexcept {
    char am_pm[3];
    strcpy(am_pm, "AM");
    ull_t h{this->hour_.get_hour()};
    ull_t m{this->minute_.get_minute()};
    ull_t s{this->second_.get_second()};
    if (h > 11) {
      strcpy(am_pm, "PM");
    }

    if (h > 12) {
      h -= 12;
    }
    std::string result{std::format("{:02}:{:02}:{:02} {} \n", h, m, s, am_pm)};
    std::cout << result;
  }
};

} // namespace cpp

int main() {

  cpp::my_time mt{27, 25, 12};

  mt.print_standard();
  mt.print_universal();

  std::cout << "\n #(00:43:10): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
