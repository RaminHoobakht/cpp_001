/* pointer to pointer */
#include <iostream>

int main() {

  int a{10};
  int *pa{&a};
  int **ppa{&pa};

  std::cout << "value of a is    : " << a << '\n';
  std::cout << "value of *pa is  : " << *pa << '\n';
  std::cout << "value of **ppa is: " << **ppa << '\n';
  std::cout << "--------------------------------------------\n";
  std::cout << "value of &a is   : " << &a << '\n';
  std::cout << "value of pa is   : " << pa << '\n';
  std::cout << "value of &pa is  : " << &pa << '\n';
  std::cout << "--------------------------------------------\n";
  std::cout << "value of ppa is  : " << ppa << '\n';
  std::cout << "value of *ppa is : " << *ppa << '\n';

  std::cout << "\n The End ..." << std::endl;
  return EXIT_SUCCESS;
}
