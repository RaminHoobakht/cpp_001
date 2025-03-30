#include <iostream>

class raphael {

    private:
      int i_{};
      int j_{};
      
    public:
      explicit raphael(const int n) noexcept {
          this->i_ = n;
      }
      
      ~raphael() noexcept {
          std::cout << 'b';
      };
      
      int f() noexcept {
          this->j_ = this->i_;
          return j_;
      }    
};

void my_func(raphael raph) noexcept;

int main() {

    raphael raph{2};
    my_func(raph);
    std::cout << 'a';

    //std::cout << "\n #(13:36:54): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

void my_func(raphael raph) noexcept {
    std::cout << raph.f();
}
