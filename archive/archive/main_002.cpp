#include <iostream>
#include <cstring>

int main() {

  int a{10};
  int b{12};

  auto result = strcmp(a, b);

  std::cout << "result is: " << result << std::endl;



  std::cout << "\n The End ..." << std::endl;
  return EXIT_SUCCESS;
}
