#include <iostream>
#include <cstring>

namespace learn_cpp {
template <class T1> void copy_array(const T1 __restrict_arr(&arr)) noexcept;
}

int main() {

  const int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9};

  learn_cpp::copy_array(numbers);

  std::cout << "\n -> #(10.00.02): The End ..." << std::endl;
  return EXIT_SUCCESS;
}

template <class T1> void learn_cpp::copy_array(const T1 __restrict_arr(&arr)) noexcept {
  const size_t size = sizeof(arr) / sizeof(*arr);
  std::cout << "array size is: " << size << '\n';

  T1 my_numbers[size]{0};
  memcpy(my_numbers, arr, size);

  const size_t size2 = sizeof(my_numbers) / sizeof(*my_numbers);
  std::cout << "my_numbers array size is: " << size2 << '\n';

  //*(my_numbers + 0) = 120;

  std::cout << my_numbers[0] << '\n';
  std::cout << arr[0] << '\n';


}
