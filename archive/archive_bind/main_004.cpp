#include <iostream>

int main() {

  int a = 120;
  int &x = a;

  std::cout << "value of a: " << a << '\n';
  std::cout << "value of x: " << x << '\n';


  x = 300;

  std::cout << "value of a: " << a << '\n';
  std::cout << "value of x: " << x << '\n';

  std::cout << "\n #(01:15:42): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
