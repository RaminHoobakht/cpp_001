#include <iostream>

int main() {

  int a{10};
  int *pa{&a};
  int **ppa{&pa};

  std::cout << "**ppa: " << **ppa << '\n';
  std::cout << "*pa  : " << *pa << '\n';
  std::cout << "---------------------------------\n";

  std::cout << "pa   : " << pa << '\n';
  std::cout << "*ppa : " << *ppa << '\n';
  std::cout << "---------------------------------\n";

  std::cout << "&pa  : " << &pa << '\n';
  std::cout << "ppa  : " << ppa << '\n';
  std::cout << "---------------------------------\n";

  std::cout << "\n #(15:18:28): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
