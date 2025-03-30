#include <iostream>
#include <ctime>
#include <random>
#include <iomanip>

template <typename T> void swap(T *a, T *b);
template <typename T> void selection_sort(T *data, const size_t size);

int main() {

  constexpr auto zero{static_cast<size_t>(0)};
  constexpr auto max_size{static_cast<size_t>(10)};
  constexpr auto max_rand{static_cast<int>(1000)};

  int numbers[max_size]{};

  time_t tm = time(nullptr);
  srand(static_cast<unsigned int>(tm));

  for(size_t i = zero; i < max_size; ++i){
    *(numbers + i) = rand() % max_rand;

  }

  for(size_t i = zero; i < max_size; ++i){
    std::cout << *(numbers + i) << std::setw(6);
  }

  std::cout << "\n--------------------------------------\n";

  selection_sort(numbers, max_size);

  for(size_t i = zero; i < max_size; ++i){
    std::cout << *(numbers + i) << std::setw(6);
  }

  std::cout << "\n #(21:19:38): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}

template <typename T> void swap(T *a, T *b) {
  T temp{*a};
  *a = *b;
  *b = temp;
}

template <typename T> void selection_sort(T *data, const size_t size) {

  T *min{};
  T *last{data + (size - 1)};
  T *fm {};

  for (; data <= last; ++data) {
    min = data;
    for (fm = (data + 1); fm <= last; ++fm) {
      if (*fm < *min) {
        min = fm;
      }
    }
    swap(data, min);
  }
}
