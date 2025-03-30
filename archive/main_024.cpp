#include <iomanip>
#include <iostream>

void bubble_sort(int *arr, const size_t size);

int main() {

    constexpr auto size{static_cast<size_t>(9)};
    constexpr auto zero{static_cast<size_t>(0)};

    int numbers[size]{-2, 3, 4, -1, 5, -12, 6, 1, 3};

    for (size_t i{zero}; i < size; ++i) {
        std::cout << std::setw(4) << numbers[i];
    }
    std::cout << '\n';

    bubble_sort(numbers, size);

    for (size_t i{zero}; i < size; ++i) {
        std::cout << std::setw(4) << numbers[i];
    }

    std::cout << "\n #(17:11:35): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

void bubble_sort(int *arr, const size_t size) {

    constexpr auto zero{static_cast<size_t>(0)};
    constexpr auto one{static_cast<size_t>(1)};

    for (size_t i{one}; i < size ; ++i) {
        for (size_t j{zero}; j < size - i; ++j) {
            if (arr[j] > arr[j + one]) {
                std::swap(arr[j], arr[j + one]);
            }
        }
    }
}
