#ifndef HEADER_SELECTION_SORT_HPP
#define HEADER_SELECTION_SORT_HPP

template <typename T> void my_swap(T *a, T *b);
template <typename T> void selection_sort(T *arr, size_t size);

template <typename T> void selection_sort(T *arr, const size_t size) {

  T *min{};
  T *last{arr + (size - 1)};
  T *fm{};

  for (; arr <= last; ++arr) {
    min = arr;
    for (fm = (arr + 1); fm <= last; ++fm) {
      if (*fm < *min) {
        min = fm;
      }
    }
    my_swap(arr, min);
  }
}

template <typename T> void my_swap(T *a, T *b) {

  T temp = *a;
  *a = *b;
  *b = temp;
}

#endif
