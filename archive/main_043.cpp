#include <iostream>

namespace cpp {

class raphael {

private:
  int a_{};
  int b_{};
  int c_{};

public:
  raphael(const int a, const int b, const int c);
  [[nodiscard]] int volume() const;
};

raphael::raphael(const int a, const int b, const int c) : a_(a), b_(b), c_(c) {
  std::cout << "I am default constructor ..." << '\n';
}

int raphael::volume() const { return this->a_ * this->b_ * this->c_; }

} // namespace cpp

int main() {

  const cpp::raphael raphael1{10, 20, 30};
  std::cout << "volume: " << raphael1.volume() << '\n';

  std::cout << "\n #(18:42:03): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
