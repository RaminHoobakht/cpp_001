#include <iostream>

int main() {
 
  int arr1[]{1, 2, 3, 4, 5};
  int arr2[]{7, 8, 9};

  int *p[]{arr1, arr2};
  
  std::cout << *(*(p + 0) + 2) << '\n';  /* 3 */
  std::cout << *(*(p + 1) + 1) << '\n';  /* 8 */

  std::cout << "\n #(10:43:50): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
