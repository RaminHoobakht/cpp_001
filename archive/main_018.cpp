#include <iostream>
#include <cstring>


struct raphael {
  int a{};
  int b{};
};




int main() {

  struct raphael r1{};
  struct raphael r2{};

  r1.a = 200;
  r1.b = 210;

  std::memcpy(&r2, &r1, sizeof(r1));

  std::cout << r2.a << '\n';
  std::cout << r2.b << '\n';

  r2.a = 50;
  r2.b = 55;

  std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  std::cout << r1.a << '\n';
  std::cout << r1.b << '\n';

  std::cout << "\n #(14:00:17): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
