#include <iostream>
#include <cstring>

int main() {

  char str1[]{"Ramin Hoobakht"};
  std::cout << "value of str1: " << str1 << '\n';
 
  (void)memset(str1, 'f', static_cast<size_t>(2));
  std::cout << "value of str1: " << str1 << '\n';

  (void)memset(str1, '\0', sizeof(str1));
    std::cout << "value of str1: " << str1 << '\n';

  std::cout << "\n #(11:10:51): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
