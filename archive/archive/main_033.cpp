#include <iostream>
#include <memory>

std::unique_ptr<int> get_number();

int main() {

  auto result{get_number()};
  std::cout << "result: " << *result.get() << '\n';



  std::cout << "\n #(21:19:24): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}

std::unique_ptr<int> get_number(){
  std::unique_ptr<int> number{std::make_unique<int>(10)};

  return number;
}
