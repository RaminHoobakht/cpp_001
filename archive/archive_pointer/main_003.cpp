#include <iomanip>
#include <iostream>

int main() {

  int data{};
  constexpr auto zero{static_cast<size_t>(0)};
  constexpr auto row_size{static_cast<size_t>(5)};
  constexpr auto col_size{static_cast<size_t>(3)};

  int **numbers{new int *[5]};

  for (size_t i{zero}; i < row_size; ++i) {
    *(numbers + i) = new int[col_size];
  }

  for (size_t i{zero}; i < row_size; ++i) {
    for (size_t j{zero}; j < col_size; ++j) {
      *(*(numbers + i) + j) = ++data;
    }
  }

  for (size_t i{zero}; i < row_size; ++i) {
    for (size_t j{zero}; j < col_size; ++j) {
      std::cout << std::setw(6) << *(*(numbers + i) + j);
    }
    std::cout << '\n';
  }

  for (size_t i{zero}; i < row_size; ++i) {
    delete[] *(numbers + i);
  }

  delete[] numbers;

  std::cout << "\n #(06:08:53): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
