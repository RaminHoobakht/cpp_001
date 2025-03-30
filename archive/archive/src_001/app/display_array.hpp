#ifndef HEADER_DISPLAY_ARRAY_H
#define HEADER_DISPLAY_ARRAY_H

#include "constants.hpp"
#include <iomanip>
#include <iostream>

template <class T> void display_array(T *arr, size_t size, int width);


template <class T> void display_array(T *arr, const size_t size, const int width) {

  for (size_t i{zero}; i < size; ++i) {
    std::cout << std::setw(width) << *(arr + i);
  }

  std::cout << nl;
}

#endif
