#include <iostream>

int main() {

  std::string str1{"Ramin Hoobakht"};
  std::cout << str1 << '\n';

  str1.insert(str1.cbegin() + 5, static_cast<size_t>(5), 'f');
  std::cout << str1 << '\n';

  std::cout << "\n #(12:38:27): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
