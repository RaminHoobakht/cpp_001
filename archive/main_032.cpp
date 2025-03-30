#include <iostream>

class raphael {
    
    public:
      int x{};
      
      void f() {
          this->x++;
          std::cout << this->x << '\n';
      }
};



int main() {

    raphael raph1{};
    raphael raph2{};
    
    raph1.x = 20;
    std::cout << "raph1 x is equals: " << raph1.x << '\n';
    
    /* copy object one into object two. it is called copy constructor */
    raph2 = raph1;
    std::cout << "raph2 x is equals: " << raph2.x << '\n';
    
    raph2.x = 120;
    std::cout << "raph1 x is equals: " << raph1.x << '\n';
    std::cout << "raph2 x is equals: " << raph2.x << '\n';

    std::cout << "\n #(00:16:46): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
