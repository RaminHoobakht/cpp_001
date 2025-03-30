#include <iostream>

int main() {

  constexpr auto zero{static_cast<size_t>(0)};
  constexpr auto ten{static_cast<size_t>(10)};
  constexpr auto twoenty{static_cast<size_t>(20)};

  int *a{reinterpret_cast<int *>(calloc(10, sizeof(int)))};

  for (size_t i = zero; i < ten; ++i) {
    *(a + i) = static_cast<int>(i + 10);
  }

  for (size_t i = zero; i < ten; ++i) {
    std::cout << *(a + i) << '\x20';
  }
  std::cout << '\n';

  a = reinterpret_cast<int *>(realloc(a, sizeof(int) * 20));

  for (size_t i = zero; i < twoenty; ++i) {
    std::cout << *(a + i) << '\x20';
  }


  free(a);

  std::cout << "\n #(06:43:39): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
