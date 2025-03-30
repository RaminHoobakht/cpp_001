#include <format>
#include <iostream>
#include <cstring>

#define ZERO (0)
#define ONE (1)
#define MINES_ONE (-1)

namespace learn_cpp {

template <class T1> void swap(T1 *a, T1 *b);

template <class T> int compare(const T a, const T b);

template <class T1, class T2> void bobble_sort(T1 *array, T2 size);

template <class T1, class T2>
void display_array(const T1 *__restrict_arr array, T2 size);

template <class T1, class T2, class T3>
bool binary_search(const T1 *const __restrict_arr array, T2 const size,
                   const T3 key);

} // namespace learn_cpp

int main() {

  /* create a unsorted array */
  int numbers[]{2, 9, 6, 10, 20, 36, 16, 41, 82, 14, 91};

  /* find the size of the array */
  size_t size = sizeof(numbers) / sizeof(*numbers);

  /* sort the array. so it ready for binary search */
  learn_cpp::bobble_sort(numbers, size);

  const int key{19};
  bool is_contain = learn_cpp::binary_search(numbers, size, key);

  if (is_contain) {
    std::printf("I found the number %d ...\n", key);
  } else {
    std::printf("I did not find the number %d ...\n", key);
  }

  learn_cpp::display_array(numbers, size);

  std::cout << "\n The End ..." << std::endl;
  return EXIT_SUCCESS;
}

template <class T1> void learn_cpp::swap(T1 *a, T1 *b) {
  T1 temp = *a;
  *a = *b;
  *b = temp;
}

template <class T> int learn_cpp::compare(const T a, const T b) {

  std::cout << "a is: " << a << '\n';
  std::cout << "b is: " << b << '\n';

  int result{ZERO};

  if (a > b) {
    result = ONE;
  } else if (a < b) {
    result = MINES_ONE;
  }
  return result;
}

template <class T1, class T2>
void learn_cpp::bobble_sort(T1 *array, const T2 size) {
  bool go_on = true;
  while (go_on) {
    go_on = false;
    for (T2 i = ZERO; i < size; ++i) {
      if (*(array + i) > *(array + i + ONE)) {
        swap((array + i), (array + i + ONE));
        go_on = true;
      }
    }
  }
}

template <class T1, class T2>
void learn_cpp::display_array(const T1 *const __restrict_arr array,
                              const T2 size) {
  for (T2 i = ZERO; i < size; ++i) {
    std::cout << std::format("index[{0}] = {1}\n", i, *(array + i));
  }
}

template <class T1, class T2, class T3>
bool learn_cpp::binary_search(const T1 *const __restrict_arr array,
                              T2 const size, const T3 key) {

  T1 *slice;
  T2 bsize{size};
  T2 middle{0};
  int result{0};

  memcpy(slice, array);


  while (bsize > 0) {
    middle = bsize / static_cast<T2>(2);
    result = learn_cpp::compare(key, *(slice + middle));
    if (result == ZERO) {
      return true;
    } else if (result == ONE) {
      /*bsize = middle - 1;
      middle = bsize / static_cast<T2>(2);
    }*/ else if (result == MINES_ONE) {
      /*middle++;
      slice = (slice + middle);
      bsize = middle - bsize;
      middle = bsize / static_cast<T2>(2);*/
    }
  }

  return false;
}
