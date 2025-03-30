#include <iostream>

void str_copy1(char * des, const char *const src);
void str_copy2(char * des, const char *src);


int main() {

  char str1[15]{};
  char str2[15] = "Ramin Hoobakht";

  str_copy2(str1, str2);

  std::cout << "value of str1: " << str1 << '\n';
  std::cout << "value of str2: " << str2 << '\n';  
  

  std::cout << "\n #(05:03:29): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}

void str_copy1(char *des, const char *const src) {

  for(size_t i{0}; src[i] != '\0'; i++){
    des[i] = src[i];
  }
}

void str_copy2(char *des, const char *src) {

  for(; (*des = *src) != '\0'; des++, src++);
}
