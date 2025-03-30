#include <iostream>

void show_value(int &x);

int main() {

  int a{120};
  int &b{a};


  std::cout << a << '\n';
  std::cout << b << '\n';

  show_value(b);


  std::cout << "\n #(03:28:41): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}

void show_value(int &x) {
  std::cout << "value of input data is: " << x << '\n';
}