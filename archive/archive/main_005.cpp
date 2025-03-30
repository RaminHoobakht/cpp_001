#include <iostream>


template<class T1>
void my_display_array(const T1 __restrict_arr(&arr));


int main() {

  const int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};

  my_display_array(numbers);

  std::cout << "\n #(10.00.01): The End ..." << std::endl;
  return EXIT_SUCCESS;
}

template<class T1>
void my_display_array(const T1 __restrict_arr(&arr)) {
  int index = 0;
  for (const int &item : arr) {
    std::cout << std::format("index[{0}]= {1}\n",index++, item);
  }
}

