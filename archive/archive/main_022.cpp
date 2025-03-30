#include <iostream>

int func_one(int a);
int func_two(int a);

int main() {

  int result{};
  int (*fp[])(int){func_one, func_two};

  for (int i = 0; i < 2; ++i) {
    result = {fp[i](i + 10)};
    std::cout << "result of fp1 is: " << result << '\n';
  }

  std::cout << "\n #(16:04:32): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}

int func_one(int a) {
  /* code */
  return a * a;
}

int func_two(int a) {
  /* code */
  return a * a * a;
}
