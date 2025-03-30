#include <iostream>

int main() {

  std::string str1{"one"};
  std::string str2{"two"};

  std::cout << str1 << '\n';
  std::cout << str2 << '\n';

  str1.swap(str2);

  std::cout << str1 << '\n';
  std::cout << str2 << '\n';

  std::cout << "\n #(10:36:24): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
