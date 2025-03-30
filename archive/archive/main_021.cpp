#include <iostream>


int func_one(int a);
int func_two(int a);


int main() {

  int result{};
  int (*fp1)(int);
  int (*fp2)(int);

  fp1 = {func_one};
  fp2 = {func_two};

  result = {fp1(10)};
  std::cout << "result of fp1 is: " << result << '\n';
  
  result = {fp2(12)};
  std::cout << "result of fp2 is: " << result << '\n';


  std::cout << "\n #(16:04:32): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}

int func_one(int a) {
  /* code */
  return a * a;
}

int func_two(int a) {
  /* code */
  return a * a * a ;
}
