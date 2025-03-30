#include <iostream>

namespace {

  class raphael final {
    
    public:
      int x_{};
      
      raphael() noexcept {
        std::cout << "value of x is: " << x_ << '\n';
      }
  };

}

int main() {

    const raphael my_raphael{};
    
    my_raphael.x_ = 120;
    std::cout << "value of x: " << my_raphael.x_ << '\n';

    std::cout << "\n #(07:40:30): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
