#include <iostream>

int main() {

  int *ramin{new int{120}};

  std::cout << "value of ramin is: " << *ramin << '\n';

  std::cout << "\n #(00:12:12): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
