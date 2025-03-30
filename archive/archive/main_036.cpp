#include <cstring>
#include <iostream>

int main() {

  char msg[]{"123456789"};
  std::cout << "before: " << msg << '\n';

  strcpy(&msg[3], &msg[6]);
  std::cout << "after: " << msg << '\n';

  std::cout << "\n #(16:47:40): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
