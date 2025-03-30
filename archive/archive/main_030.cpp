#include <iostream>

int main() {

  constexpr auto zero{static_cast<size_t>(0)};
  constexpr auto ten{static_cast < size_t>(10)};

  int *int_array{new int[ten]{1, 2, 3, 4, 5, 6, 7, 8, 9}};

  for (size_t i = zero; i < ten; ++i) {
    std::cout << *(int_array + i) << '\x20';
  }


  delete[] int_array;

  std::cout << "\n #(23:18:52): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
