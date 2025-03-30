#include <iostream>

class raphael {
    
    private:
      int i_{};
      int j_{};
      
    public:
      explicit raphael(const int i) noexcept;
      [[maybe_unused]] void set_i(const int i) noexcept;
      [[maybe_unused]] void set_j(const int j) noexcept;
      
      [[maybe_unused]] [[nodiscard]] int get_i() const noexcept;
      [[maybe_unused]] [[nodiscard]] int get_j() const noexcept;
};

raphael::raphael(const int i) noexcept {
    this->i_ = i; 
}

void raphael::set_i(const int i) noexcept {
    this->i_ = i;
}

void raphael::set_j(const int j) noexcept {
    this->j_ = j;
}

int raphael::get_i() const noexcept {
    return this->i_;
}

int raphael::get_j() const noexcept {
    return this->j_;
}

void my_func(raphael raph) noexcept;

/* ------------- */

int main() {
  
    raphael raph1{70};
    
    raph1.set_j(90);
    my_func(raph1);
    
    std::cout << "\n #(00:26:00): The End ..." << std::endl;
    return (EXIT_SUCCESS);
} 

void my_func(raphael raph) noexcept {
    std::cout << " -> Total: " << raph.get_i() + raph.get_j() << '\n';   
}

