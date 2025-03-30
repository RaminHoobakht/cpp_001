#include <iomanip>
#include <iostream>
#include <memory>
#include <random>

void insertion_sort(int *arr, size_t size);

int main() {

  constexpr auto zero{static_cast<size_t>(0)};
  constexpr auto size{static_cast<size_t>(16)};
  constexpr auto base{static_cast<size_t>(10)};

  char input_number[size]{};
  char *endptr{};

  std::random_device rd{};
  std::mt19937 mt{rd()};
  std::uniform_int_distribution<int> dist{0, 100};

  std::cout << "how many number do you want to generate? ";
  std::cin.get(input_number, size, '\n');
  const size_t times = strtoul(input_number, &endptr, base);

  std::unique_ptr<int[]> random_numbers{std::make_unique<int[]>(times)};
  for (size_t i{zero}; i < times; ++i) {
    random_numbers[i] = dist(mt);
  }

  for (size_t i{zero}; i < times; ++i) {
    std::cout << std::setw(4) << random_numbers[i];
  }
  std::cout << '\n';

  insertion_sort(random_numbers.get(), times);

  for (size_t i{zero}; i < times; ++i) {
    std::cout << std::setw(4) << random_numbers[i];
  }
  std::cout << '\n';

  std::cout << "\n #(05:32:30): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}

void insertion_sort(int *const arr, const size_t size) {

  constexpr auto zero{static_cast<size_t>(0)};
  constexpr auto one{static_cast<size_t>(1)};
  int current{};
  size_t prev{};

  for (size_t i{one}; i < size; ++i) {

    prev = i - one;
    current = arr[i];

    while (prev >= zero && current < arr[prev]) {
      arr[prev + one] = arr[prev];
      prev--;
    }

    arr[prev + one] = current;
  }
}