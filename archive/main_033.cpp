#include <iostream>

class raphael {
    
    private:
      int x_{};
      
    public:
      raphael(const int x) noexcept;
      ~raphael() noexcept;
      void set_x(const int x) noexcept;
      int get_x() const noexcept;
};

raphael::raphael(const int x) noexcept {
    this->x_ = x;
    std::cout << "Hello, I am (" << this->x_ << ") " << '\n';
}

raphael::~raphael() noexcept {
    std::cout << "Good bay, I was (" << this->x_ << ") " << '\n'; 
}

void raphael::set_x(const int x) noexcept {
    this->x_ = x;
}

int raphael::get_x() const noexcept {
    return this->x_;
}

/* -------------------- */

int main() {

    constexpr auto size{static_cast<size_t>(8)};
    
    raphael raph[size] {
            raphael{1}, raphael{2}, 
            raphael{3}, raphael{4}, 
            raphael{5}, raphael{6}, 
            raphael{7}, raphael{8}
    };
   
    int total { 
        raph[0].get_x() + raph[1].get_x() + 
        raph[2].get_x() + raph[3].get_x() + 
        raph[4].get_x() + raph[5].get_x() + 
        raph[6].get_x() + raph[7].get_x()
    };

    std::cout << '\n' <<" -> Total is: " << total << '\n';

    std::cout << "\n #(00:26:00): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
