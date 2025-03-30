#include <iomanip>
#include <iostream>

int main() {

  constexpr auto zero{static_cast<size_t>(0)};
  constexpr auto one{static_cast<size_t>(1)};
  constexpr auto size{static_cast<size_t>(9)};

  int my_numbers[size]{9, 8, 7, 6, 5, 4, 3, 2, 1};

  for (size_t i{zero}; i < size; ++i) {
    std::cout << std::setw(4) << my_numbers[i];
  }
  std::cout << '\n' << '\n';

  for (size_t i{zero}; i < size; ++i) {
    for (size_t j{zero}; j < size - 1; ++j) {
      int temp{my_numbers[j + one]};
      if (my_numbers[j] > my_numbers[j + one]) {
        my_numbers[j + one] = my_numbers[j];
        my_numbers[j] = temp;
      }
    }
  }

  for (size_t i{zero}; i < size; ++i) {
    std::cout << std::setw(4) << my_numbers[i];
  }
  std::cout << '\n' << '\n';

  std::cout << "\n #(14:25:53): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
