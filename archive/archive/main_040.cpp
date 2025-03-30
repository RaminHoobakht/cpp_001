#include <iostream>
#include <memory>

int main() {


  auto const numbers{new int};

  *numbers = 123;
  std::cout << *numbers << '\n';
  std::cout << numbers << '\n';

  *numbers = 654;
  std::cout << *numbers << '\n';
  std::cout << numbers << '\n';

  delete numbers;

  std::cout << "\n #(22:30:46): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
