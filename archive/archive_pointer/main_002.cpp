#include <iomanip>
#include <iostream>

int main() noexcept {

  int data{0};
  constexpr auto zero{static_cast<size_t>(0)};
  constexpr auto row_size{static_cast<size_t>(5)};
  constexpr auto col_size{static_cast<size_t>(3)};

  std::cerr << "step 1 <first>" << '\n';

  int **numbers = new int *[row_size];

  std::cerr << "step 2" << '\n';

  /* initials all rows */
  for (size_t i{zero}; i < row_size; ++i) {
    *(numbers + i) = new int[col_size];
  }

  std::cerr << "step 3" << '\n';

  /* all members initials with int numbers */
  for (size_t i{zero}; i < row_size; ++i) {
    for (size_t j{zero}; j < col_size; ++j) {
      *(*(numbers + i) + j) = ++data;
    }
  }

  std::cerr << "step 4" << '\n';

  /* display values of all members */
  for (size_t i{zero}; i < row_size; ++i) {
    for (size_t j{zero}; j < col_size; ++j) {
      std::cout << std::setw(4) << *(*(numbers + i) + j);
    }
    std::cout << '\n';
  }

  std::cerr << "step 5" << '\n';

  /* release memory of all columns */
  for (size_t i{zero}; i < row_size; ++i) {
    delete[] *(numbers + i);
  }

  std::cerr << "step 6" << '\n';

  /* release memory of all rows */
  delete[] numbers;

  std::cerr << "step 7 <last>" << '\n';

  std::cout << "\n #(04:50:26): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
