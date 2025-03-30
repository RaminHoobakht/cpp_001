#include <iostream>
#include <memory>

int main() {

  std::unique_ptr<int> ramin{std::make_unique<int>(120)};
  //*ramin.get() = 120;

  std::cout << *ramin.get() << '\n';

  ramin.reset();

  std::cout << "\n #(07:10:28): The End ..." << std::endl;
  return (EXIT_SUCCESS);
} 
