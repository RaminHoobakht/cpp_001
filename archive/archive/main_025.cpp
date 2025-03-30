#include <iostream>
#include <string>

int main() {

  /* define str_insert string data-type */
  std::string str_insert{"0123456789"};
  
  /* defien message string collectoin */
  std::string message{"aaaaa"};

  /* insertion operation */
  message.insert(2, str_insert, 3, 4); /* aa3456aaa */

  /* print aftper doin insertion */
  std::cout << '\x20' << message << '\n';


  std::cout << "\n #(02:37:04): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
