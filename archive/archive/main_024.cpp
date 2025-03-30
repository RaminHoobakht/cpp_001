#include <iostream>

int main() {

  int a{67};

  void *p;

  p = &a;

  std::cout << "value of *p is: " << *(reinterpret_cast<int *>(p)) << '\n';



  std::cout << "\n #(22:54:52): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
