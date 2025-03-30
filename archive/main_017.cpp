#include <iostream>

int main() {

  enum my_enum { a, b, c, d, e, f, g, h, i, j, k, l, m, n };

  my_enum me{f};

  /* من یک سی پلاس پلاس دولوپر هستم */
  std::cout << static_cast<int>(me) << '\n';:

  {
    int a{23};
    std::cout << "value of a is: " << a << '\n';
    std::cout << "I am a C/C++ Developer ..." << std::endl;
    std::cout << "How are you to day ..." << std::endl;
  }

  std::cout << "\n #(16:58:42): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
