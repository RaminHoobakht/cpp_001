/* using string data-type */

#include <iostream>

int main() {
                //  01234567890123
  std::string str1{"Ramin Hoobakht"};
  std::cout << str1.at(13) << '\n';

  str1.assign("Mariam");
  std::cout << str1 << '\n';

  str1.append("Yasamin");
  std::cout << str1 << '\n';

  std::string str2{str1.substr(3, 4)};
  std::cout << str2 << '\n';


  std::string str3{str1.erase(3, 4)};
  std::cout << str1 << '\n';
  std::cout << str3 << '\n';


  std::cout << "\n #(07:09:15): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
