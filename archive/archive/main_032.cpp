#include <iostream>

int main() {

  int x;
  int *a = NULL;
  int *p;
  int size = 0, c = 0, i;

  std::cout << "\nEnter: " << '\n';

  while (std::cin >> x) {

    if (c >= size) {
      p = new int[size + 3];

      for (i = 0; i < size; ++i)
        p[i] = a[i];

      delete[] a;

      a = p;
      size += 3;
    }
    a[c++] = x;
  }

  for (int j = 0; j < c; ++j) {
    std::cout << a[j] << '\x20';
  }
  std::cout << '\n';

  delete[] a;

  std::cout << "\n #(17:06:15): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
