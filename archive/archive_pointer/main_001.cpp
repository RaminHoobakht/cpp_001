#include <iostream>
#include <memory>

int main() {

  constexpr auto zero{static_cast<size_t>(0)};
  constexpr auto size{static_cast<size_t>(5)};

  int **ramin{new int *[size]};

  for (size_t i{zero}; i < size; ++i) {
    ramin[i] = new int[i + 2];
  }

  for(size_t i = zero; i < size; ++i) {
    delete [] ramin[i];
  }

  delete [] ramin;

  std::cout << "\n #(07:10:28): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
