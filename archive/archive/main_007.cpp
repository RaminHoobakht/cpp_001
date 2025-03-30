#include <format>
#include <iostream>

bool binary_search(const int *const __restrict_arr arr, const size_t min_idx,
                   const size_t max_idx, const int key);
int main() {

  int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  size_t min_idx{0};
  size_t max_idx{9};
  // int key{-5};

  for (int key = 1; key < 10; ++key) {
    bool result = binary_search(numbers, min_idx, max_idx, key);
    if (result) {
      std::cout << std::format("I found the number {}\n", key);
    } else {
      std::cout << std::format("I am sorry. I did not find the number {}\n",
                               key);
    }
  }

  puts("\n #(22:42:50): The End ...");
  return (EXIT_SUCCESS);
}

bool binary_search(const int *const __restrict_arr arr, const size_t min_idx,
                   const size_t max_idx, const int key) {

  size_t min_index{min_idx};
  size_t max_index{max_idx};
  size_t middle{0};
  size_t before{0};

  while (true) {

    middle = (min_index + max_index) / 2;

    if (before == middle) {
      return false;
    } else {
      before = middle;
    }

    if (arr[middle] == key) {
      return true;
    } else if (arr[middle] < key) {
      min_index = middle;
      if (min_index == max_index - 1)
        min_index++;
    } else {
      max_index = middle;
    }
  }
}
