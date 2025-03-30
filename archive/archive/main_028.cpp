#include <iostream>

int main() {
  
  int a{120};

  void *p{};

  p = &a;

  std::cout << "value of *p is: " << *(static_cast<int *>(p)) << '\n';


  std::cout << "\n #(20:17:28): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
