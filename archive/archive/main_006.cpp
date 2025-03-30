#include <iostream>

int main() {


  //            0  1  2  3  4  5  6  7  8  9
  int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
  // middle: 4 


  int key{1};
  int min_index{0};
  int max_index{1};
  
  size_t middel = (min_index + max_index) / 2;
  std::cout << " middle index: " << middel << '\n';
  
  if(numbers[middel] == key){
    std::cout << " I found it ..." << '\n';
  } else if( numbers[middel] < key) {
    std::cout << " key is greater ..." << '\n';
  } else {
    std::cout << " key is less ... " << '\n';
  }


  std::cout << "\n #(10.00.01): The End ..." << std::endl;
  return EXIT_SUCCESS;
}
