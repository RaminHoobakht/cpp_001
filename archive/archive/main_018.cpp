#include <iostream>

int main() {

  constexpr auto zero{static_cast<size_t>(0)};
  constexpr auto row_no{static_cast<size_t>(3)};
  constexpr auto col_no{static_cast<size_t>(3)};

  int num[row_no][col_no]{1, 2, 3, 4, 5, 6, 7, 8, 9};

  int (*p)[col_no]{num};

  for (size_t row = zero; row < row_no; ++row) {
    for (size_t col = zero; col < row_no; ++col) {
      std::cout << *(*(p + row) + col) << '\x20';
    }
  }

  std::cout << "\n #(20:22:24): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
