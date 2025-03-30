#include <iostream>

int main() {

  constexpr auto col_no{static_cast<size_t>(3)};
  constexpr auto zero{static_cast<size_t>(0)};

  int numbers[][col_no]{{1, 2, 3}, {4, 5, 6}};

  /* return the number of row */
  constexpr size_t row_no{sizeof(numbers) / sizeof(*numbers)};
  // constexpr size_t length{row_no * col_no};

  std::cout << '\x20';
  for (size_t i = zero; i < row_no; ++i) {
    for (size_t j = zero; j < col_no; ++j) {
      std::cout << *(*(numbers + i) + j) << '\x20';
    }
  }

  std::cout << "\n #(16:42:50): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
