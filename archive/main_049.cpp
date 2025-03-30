#include <iostream>

class raphael final {

private:
  int x_{};

public:
  raphael(const int x) noexcept { this->x_ = x; }

  friend void print_raphael(const raphael &rhs) noexcept;
};

void print_raphael(const raphael &rhs) noexcept {
  std::cout << "value of raphael is: " << rhs.x_ << '\n';
}

int main() {

  const raphael my_raphael{120};

  print_raphael(my_raphael);

  std::cout << "\n #(05:14:09): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
