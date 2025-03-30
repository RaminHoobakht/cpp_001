#include <iostream>

int func_one(int (*)(int, int), int, int);
int do_somethign_one(int, int);
int do_somethign_two(int, int);

int main() {

  int result = {func_one(do_somethign_two, 10, 20)};
  std::cout << "result is: " << result << '\n'; /* 200 */

  std::cout << "\n #(16:32:13): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}

int func_one(int (*p)(int, int), int a, int b) { return (p)(a, b); }

int do_somethign_one(int a, int b) { return a + b; }

int do_somethign_two(int a, int b) { return a * b; }
