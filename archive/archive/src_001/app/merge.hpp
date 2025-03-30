#ifndef HEADER_MERGE_HPP
#define HEADER_MERGE_HPP

#include <iostream>
#include <memory>

template <typename T>
std::unique_ptr<T[]> merge_arryas(const T *arr1, const T *arr2, size_t size1,
                                  size_t size2);

template <typename T>
std::unique_ptr<T[]> merge_arryas(const T *const arr1, const T *const arr2,
                                  const size_t size1, const size_t size2) {

  const size_t total_size{size1 + size2};
  auto index1{static_cast<size_t>(0)};
  auto index2{static_cast<size_t>(0)};
  auto index{static_cast<size_t>(0)};

  T data1{};
  T data2{};

  std::unique_ptr<T[]> merge{std::make_unique<T[]>(size1 + size2)};

  while (index <= total_size) {

    data1 = *(arr1 + index1);
    data2 = *(arr2 + index2);

    if (data1 == data2) {
      *(merge.get() + index++) = data1;
      *(merge.get() + index++) = data2;
      index1++;
      index2++;
    } else if (index1 <= size1 && data1 < data2) {
      *(merge.get() + index++) = data1;
      index1++;
    } else if (index2 <= size2) {
      *(merge.get() + index++) = data2;
      index2++;
    }
  }

  return merge;
}

#endif
