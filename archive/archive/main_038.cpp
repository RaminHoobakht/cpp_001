/* selection sort */

#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>

template <typename T> void my_swap(T *a, T *b);
template <typename T> void selection_sort(T *data, const size_t size);

int main() {

  constexpr auto zero{static_cast<size_t>(0)};
  constexpr auto max_size{static_cast<size_t>(10)};
  constexpr auto max_rnd{static_cast<int>(100)};

  time_t tm{time(nullptr)};
  srand(static_cast<unsigned int>(tm));

  int numbers[max_size]{0};
  for (size_t i = zero; i < max_size; ++i) {
    *(numbers + i) = rand() % max_rnd;
  }

  std::cout << '\x20';
  for (size_t i = zero; i < max_size; ++i) {
    std::cout << *(numbers + i) << '\x20';
  }

  std::cout << "\n-----------------------------------------------\n";

  selection_sort(numbers, max_size);

  std::cout << '\x20';
  for (size_t i = zero; i < max_size; ++i) {
    std::cout << *(numbers + i) << '\x20';
  }

  std::cout << "\n #(20:38:44): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}

template <typename T> void my_swap(T *a, T *b) {
  T temp{*a};
  *a = *b;
  *b = temp;
}

template <typename T> void selection_sort(T *data, const size_t size) {
  T *min{};
  T *last{data + (size - 1)};
  T *fm{};

  for (; data <= last; ++data) {
    min = data;
    for (fm = (data + 1); fm <= last; ++fm) {
      if (*fm < *min) {
        min = fm;
      }
      my_swap(data, min);
    }
  }
}
