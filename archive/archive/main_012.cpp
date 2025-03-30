#include <iostream>
#include <atomic>


int main() {


  int int_array[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
  int *p{int_array + 8};

  std::cout << "value of *p: " << *p << '\n';

  for(std::atomic_size_t i = 0; i < 9; ++i) {
    std::cout << '\x20' << *p << '\x20';
    p--;
  }




  std::cout << "\n #(19:47:35): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
