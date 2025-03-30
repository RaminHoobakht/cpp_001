#include <iostream>
#include <cstring>

class raphael {
    private:
      int size_{};
      char name_[8]{};
    
    public:
      raphael() noexcept;
      [[maybe_unused]] void set_size(int _size) noexcept;
      [[maybe_unused]] void set_name(char name[8]) noexcept;
      
      [[nodiscard]] [[maybe_unused]] int get_size() const noexcept;
      [[nodiscard]] [[maybe_unused]] const char * get_name() const noexcept;
};

raphael::raphael() noexcept {
    std::cout << "raphael object is created ..." << '\n';
}

void raphael::set_size(int size) noexcept {
    this->size_ = size;
}

void raphael::set_name(char name[8]) noexcept {
    strncpy(this->name_, name, 8);
}

int raphael::get_size() const noexcept {
    return this->size_;
}

const char * raphael::get_name() const noexcept {
    return this->name_;
}


int main() {
    
    char msg[8]{"1234567"};
    raphael raph1{};
    
    raph1.set_size(120);
    raph1.set_name(msg);
    
    std::cout << "size is: " << raph1.get_size() << '\n';
    std::cout << "name is: " << raph1.get_name() << '\n';

    std::cout << "\n #(21:13:41): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
