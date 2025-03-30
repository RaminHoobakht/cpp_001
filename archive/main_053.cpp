#include <iostream>

namespace cpp {

  class raphael final {
    
    private:
      int x_;
      const int y_;
      
    public:
      raphael(int x, int y) noexcept : x_(x), y_(y) {
      }
      
    void func1() noexcept {
      this->y_ = 3;
    }
    
    void func2() const noexcept {
      std::cout << "value of y is: " << this->y_ << '\n';
      std::cout << "value of x is: " << this->x_ << '\n';
    }
  };

} // namespace cpp


int main() {

  cpp::raphael my_raphael{1, 2};
  
  my_raphael.func1();
  my_raphael.func2();
    
  std::cout << "\n #(06:59:33): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
