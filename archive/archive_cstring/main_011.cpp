#include <iostream>

void string_cancatination(char *des, const char *src);

int main() {

  char str1[16]{" Hoobakht"};
  char str2[32]{"Ramin"};

  string_cancatination(str2, str1);

  std::cout << "value of str2: " << str2 << '\n';


  std::cout << "\n #(06:52:08): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}

void string_cancatination(char *des, const char *src) {

  size_t index{};
  
  for(; *(des + index) != '\0'; ++index);
  
  for(size_t i{0}; *(src + i) != '\0'; ++i){
    *(des + index) = *(src + i);
    index++;
  }
}