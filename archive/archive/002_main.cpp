#include <iostream>
#include <cstring>


void array_param(const int[9] (&arr));

int main() {

  const int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9};

  array_param(numbers);


  std::cout << "\n -> #(10.00.02): The End ..." << std::endl;
  return EXIT_SUCCESS;
}

void array_param(const int[9] (&arr)) {
  for(const &item : arr) {
    std::cout << item << '\n';
  }
}
