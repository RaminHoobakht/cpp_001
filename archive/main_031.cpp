#include <iostream>

class raphael {
    
    private:
      int x_{};
    
    public:
      // raphael() noexcept;
      explicit raphael(const int x = 3) noexcept;
      [[maybe_unused]] void set_x(const int x) noexcept;
      [[nodiscard]] [[maybe_unused]] int get_x() const noexcept;
};

// raphael::raphael() noexcept {
//    std::cout << "raphael object is created ..." << '\n';
// }

raphael::raphael(const int x) noexcept {
    this->x_ = x;
}

void raphael::set_x(const int x) noexcept {
    this->x_ = x;
}

int raphael::get_x() const noexcept {
    return this->x_;
}


int main() {

    raphael raph1{};
    
    std::cout << raph1.get_x() << '\n';
    std::cout << "السلام و علیکم و رحمه الله و برکاته" << '\n';

    std::cout << "\n #(22:32:08): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
