#include <iostream>

int main() {

  std::string a{"121"};

  int int_a{std::atoi(a.c_str())};
  std::cout << int_a / 3 << '\n';

  double double_a{std::atof(a.c_str())};
  std::cout << double_a / 3 << '\n';

  long long int long_long_a{std::atoll(a.c_str())};
  std::cout << long_long_a / 3 << '\n';

  std::cout << "\n #(22:04:14): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
