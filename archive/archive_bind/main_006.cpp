#include <iostream>


static char my_name[]{"Ramin Hoobakht"};

char &func(int i);

int main() {

  std::cout << "my name is: " << my_name << '\n';

  func(5) = ',';

  std::cout << "my name is: " << my_name << '\n';

  std::cout << "\n #(23:09:46): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}

char &func(int i) {
  /* code */
  return my_name[i]; 
}