#include <iomanip>
#include <iostream>

void insertion_sort(int *arr, size_t size);

int main() {

    int numbers[]{-2, 3, 4, -1, 5, -12, 6, 1, 3};
    size_t size = sizeof(numbers) / sizeof(*numbers);

    insertion_sort(numbers, size);

    for (int &item: numbers) {
        std::cout << std::setw(4) << item;
    }

    std::cout << "\n #(03:26:04): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

void insertion_sort(int *arr, const size_t size) {

    constexpr auto zero{static_cast<size_t>(0)};
    constexpr auto one{static_cast<size_t>(1)};

    for (size_t i{one}; i < size; ++i) {
        int current{arr[i]};
        size_t prev{i - one};

        while (prev >= zero && current < arr[prev]) {
            arr[prev + one] = arr[prev];
            prev--;
        }
        arr[prev + one] = current;
    }
}
