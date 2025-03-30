#include <iostream>
#include <cstring>

namespace cpp {

    class samuel final {
    
        private:
          char names_[2][16]{};
          int scores_[2]{};
          
        public:
          samuel() noexcept;
          samuel(const char names[2][16], const int scores[2]) noexcept;
          ~samuel() noexcept;
          
          [[maybe_unused]] void set_name(const char names[2][16]) noexcept;
          [[maybe_unused]] void set_score(const int scores[2]) noexcept;
          
          [[maybe_unused]] [[nodiscard]] const char (*get_names() const noexcept)[16];
          [[maybe_unused]] [[nodiscard]] const int *get_scores() const noexcept;
          
          [[maybe_unused]] void display_data() noexcept;
    };

    cpp::samuel::samuel() noexcept {
        std::cout << "I am default constructor ..." << '\n';
    }

    /* -------- */

    cpp::samuel::samuel(const char names[2][16], const int scores[2]) noexcept {
        (void)strncpy(this->names_[0], names[0], sizeof(char) * static_cast<size_t>(16));
        (void)strncpy(this->names_[1], names[1], sizeof(char) * static_cast<size_t>(16));
        (void)memcpy(this->scores_, scores, sizeof(int) * static_cast<size_t>(2));
    }

    /* -------- */

    cpp::samuel::~samuel() noexcept {
        std::cout << "Good Bay ..." << '\n';
    }

    /* -------- */

    void cpp::samuel::set_name(const char names[2][16]) noexcept {
        (void)strncpy(this->names_[0], names[0], sizeof(char) * static_cast<size_t>(16));
        (void)strncpy(this->names_[1], names[1], sizeof(char) * static_cast<size_t>(16));
    }

    /* -------- */

    void cpp::samuel::set_score(const int scores[2]) noexcept {
        (void)memcpy(this->scores_, scores, sizeof(int) * 2);
    }

    /* -------- */

    const char (*cpp::samuel::get_names() const noexcept)[16] {
        return this->names_;
    }

    /* -------- */

    const int *cpp::samuel::get_scores() const noexcept {
        return this->scores_;
    }
    
    /* -------- */
    
    void cpp::samuel::display_data() noexcept {
        for(size_t i{0}; i < 2; ++i) {
            std::cout << this->names_[i] << ": " << scores_[i] << '\n';
        }
    }

} /* end of cpp namespace */


/* ----------------------------- */
int main() {

    constexpr auto zero{static_cast<size_t>(0)};
    constexpr auto one{static_cast<size_t>(1)};
    constexpr auto eight{static_cast<size_t>(8)};
    constexpr auto base{static_cast<size_t>(10)};

    constexpr auto row_size{static_cast<size_t>(2)};
    constexpr auto col_size{static_cast<size_t>(16)};
    
    cpp::samuel sml{};
    char input_names[row_size][col_size]{};
    char input_scores[eight]{};
    int scores[eight]{};
    char *endptr{};
    
    
    for(size_t i{zero}; i < row_size; ++i) {
        std::cout << "enter name (" << i + 1 << ") : ";
        std::cin.get(input_names[i], col_size - one, '\n');
        while((fgetc(stdin)) != '\n');    
    }
    std::cout << '\n';
    
    for(size_t i{zero}; i < row_size; ++i) {
        std::cout << "enter score for (" << input_names[i] << ") : ";
        std::cin.get(input_scores, eight, '\n');
        while((fgetc(stdin)) != '\n');
        scores[i] = static_cast<int>(strtol(input_scores, &endptr, base));
    }
    std::cout << '\n';
    
    sml.set_name(input_names);
    sml.set_score(scores);
    sml.display_data();


    std::cout << "\n #(14:04:14): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}


