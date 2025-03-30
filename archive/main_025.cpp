#include <iomanip>
#include <iostream>
#include <memory>
#include <random>

void bubble_sort(int *arr, const size_t size);


int main() {

    constexpr auto zero{static_cast<size_t>(0)};
    constexpr auto size{static_cast<size_t>(16)};
    constexpr auto base{10};

    size_t times{};
    char input_numbre[size]{};
    char *endptr{};

    std::random_device rd{};
    std::mt19937 mt{rd()};
    std::uniform_int_distribution<int> dist{0, 100};

    std::cout << " how many nubmer do you want to generate? ";
    std::cin.get(input_numbre, size);
    times = strtoul(input_numbre, &endptr, base);
    std::cout << '\n';

    std::unique_ptr<int[]> numbers{std::make_unique<int[]>(times)};

    for (size_t i{zero}; i < times; ++i) {
        numbers[i] = dist(mt);
    }

    for (size_t i{zero}; i < times; ++i) {
        std::cout << std::setw(4) << numbers[i];
    }
    std::cout << '\n' << '\n';

    bubble_sort(numbers.get(), times);

    for (size_t i{zero}; i < times; ++i) {
        std::cout << std::setw(4) << numbers[i];
    }
    std::cout << '\n';

    std::cout << "\n #(01:57:00): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}


void bubble_sort(int *arr, const size_t size) {

    constexpr auto zero{static_cast<size_t>(0)};
    constexpr auto one{static_cast<size_t>(1)};

    for (size_t i{one}; i < size; ++i) {
        for (size_t j{zero}; j < size - i; ++j) {
            if (arr[j] > arr[j + one]) {
                std::swap(arr[j], arr[j + one]);
            }
        }
    }
}
