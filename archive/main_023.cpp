#include <iomanip>
#include <iostream>
#include <random>

int main() {

    static constexpr auto zero{static_cast<size_t>(0)};
    static constexpr auto size{static_cast<size_t>(16)};
    static int numbers[size]{};

    std::random_device rd{};
    std::mt19937 mt{rd()};
    std::uniform_int_distribution<int> dist{0, 100};

    for (size_t i{zero}; i < size; ++i) {
        numbers[i] = dist(mt);
    }

    for (size_t i{zero}; i < size; ++i) {
        std::cout << std::setw(4) << numbers[i];
    }


    std::cout << "\n #(18:22:29): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
