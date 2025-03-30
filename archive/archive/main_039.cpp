#include <iostream>

int main() {

  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  constexpr auto zero{static_cast<size_t>(0)};
  constexpr auto size{static_cast<size_t>(3)};

  int **student{};
  student = new int *[size];


  for (size_t i{zero}; i < size; ++i) {
    student[i] = new int[size];
  }

  for (size_t i{zero}; i < size; ++i) {
    delete[] student[i];
  }

  delete[] student;


  std::cout << "\n #(15:47:22): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
