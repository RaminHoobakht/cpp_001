#include <iostream>
#include <memory>

int main() {

  constexpr auto zero{static_cast<size_t>(0)};
  constexpr auto size{static_cast<size_t>(10)};

  std::unique_ptr<int[]> numbers{std::make_unique<int[]>(size)};
  if(numbers.get() == nullptr){
		exit(EXIT_FAILURE);
	}

  for (size_t i{zero}; i < size; ++i) {
    *(numbers.get() + i) = static_cast<int>(i + 10);
  }

  std::cout << '\x20';
  for (size_t i{zero}; i < size; ++i) {
    std::cout << numbers.get()[i] << '\x20';
  }

  std::cout << "\n #(23.31.30): The End ..." << std::endl;
  return EXIT_SUCCESS;
}
