/*
 *  1 - copy an array.
 *
 *
 *
 */

#include <cstring>
#include <format>
#include <iostream>
#include <memory>
#include <random>

template <class T1, class T2>
void my_method_one(const T1 *const __restrict_arr my_array, const T2 size);

int main() {

  int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
  size_t size{sizeof(numbers) / sizeof(*numbers)};

  my_method_one(numbers, 9);

  std::cout << "\n #(10.00.01): The End ..." << std::endl;
  return EXIT_SUCCESS;
}

template <class T1, class T2>
void my_method_one(const T1 *const __restrict_arr my_array, const T2 size) {

  T1 my_copy_array[size];
  for (T2 i = 0; i < size; ++i) {
    *(my_copy_array + i) = *(my_array + i);
    *(my_copy_array + i) += 10;
  }

  for (T2 i = 0; i < size; ++i) {
    std::cout << *(my_copy_array + i) << '\n';
  }
}
