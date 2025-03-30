#include <iostream>

int &min(int &a, int &b);

int main() {

  int x{3};
  int y{5};

  min(x, y) = 999;

  std::cout << "value of x is: " << x << '\n';
  std::cout << "value of y is: " << y << '\n';


  std::cout << "\n #(23:47:55): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}

int &min(int &a, int &b) {
  /* code */
  return a < b ? a : b;
}
