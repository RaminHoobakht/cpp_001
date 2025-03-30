#include <iostream>
#include <cstring>

static constexpr auto nl{'\n'};

namespace cpp {

    constexpr auto _0_{static_cast<size_t>(0)};
    constexpr auto _1_{static_cast<size_t>(1)};
    constexpr auto _2_{static_cast<size_t>(2)};
    constexpr auto _32_{static_cast<size_t>(32)};
    
    constexpr char ho_msg[]{" -> Hello I am samuel ..."};
    constexpr char gb_msg[]{" -> Good Bay ..."};

    class samuel final {

        private:
          char names_[_2_][_32_]{};
          int scores_[_2_]{};
        
        public:
          samuel() noexcept;
          samuel(const char names[_2_][_32_], int scores_[_2_]) noexcept;
          ~samuel() noexcept;
          
          [[maybe_unused]] void set_names(const char names[_2_][_32_]) noexcept;
          [[maybe_unused]] void set_scores(const int scores[_2_]) noexcept;

          [[maybe_unused]] [[nodiscard]] const char (*get_names() const noexcept)[_32_];
          [[maybe_unused]] [[nodiscard]] const int *get_scores() const noexcept;
          
          [[maybe_unused]] void display_data() const noexcept;
    };
    
    /* --------------- */
    
    samuel::samuel() noexcept {
        std::cout << ho_msg << nl;
    }

    samuel::samuel(const char names[_2_][_32_], int scores[_2_]) noexcept {
        (void)strncpy(this->names_[_0_], names[_0_], sizeof(char) * _32_);
        (void)strncpy(this->names_[_1_], names[_1_], sizeof(char) * _32_);
        (void)memcpy(this->scores_, scores, sizeof(int) * _2_);
    }
    
    cpp::samuel::~samuel() noexcept {
        std::cout << gb_msg << nl; 
    }
    
    void samuel::set_names(const char names[_2_][_32_]) noexcept {
        (void)strncpy(this->names_[_0_], names[_0_], sizeof(char) * _32_);
        (void)strncpy(this->names_[_1_], names[_1_], sizeof(char) * _32_);
    }
    
    void cpp::samuel::set_scores(const int scores[_2_]) noexcept {
        (void)memcpy(this->scores_, scores, sizeof(int) * _2_);
    }
    
    const char (*samuel::get_names() const noexcept)[_32_] {
        return this->names_;
    }
    
    const int *samuel::get_scores() const noexcept {
        return this->scores_;
    }

    void samuel::display_data() const noexcept {
        for(size_t i{_0_}; i < _2_; ++i) {
            std::cout << this->get_names()[i] << ": " << this->get_scores()[i] << nl;
        }
    }

} /* end of namespace cpp */


int main() {

    cpp::samuel sml{};
    char input_names[2][32]{};
    char input_score[8]{};
    int input_scores[2]{};
    char *endptr{};
    
    std::cout << "enter a name (1): ";
    std::cin.get(input_names[0], 31, nl);
    while((fgetc(stdin)) != nl);
    
    std::cout << "enter a name (2): ";
    std::cin.get(input_names[1], 31, nl);
    while((fgetc(stdin)) != nl);
    
    sml.set_names(input_names);

    std::cout << "enter score for " << input_names[0] << ": ";
    std::cin.get(input_score, 7, nl);
    while((fgetc(stdin)) != nl);
    input_scores[0] = static_cast<int>(strtol(input_score, &endptr, 10));
    

    std::cout << "enter score for " << input_names[1] << ": ";
    std::cin.get(input_score, 7, nl);
    while((fgetc(stdin)) != nl);
    input_scores[1] = static_cast<int>(strtol(input_score, &endptr, 10));
    
    std::cout << nl << nl;
    
    
    sml.set_scores(input_scores);
    
    sml.display_data();


    std::cout << "\n #(03:08:25): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
