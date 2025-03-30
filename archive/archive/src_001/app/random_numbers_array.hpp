#ifndef HEADER_RANDOM_NUMBERS_ARRAY_HPP
#define HEADER_RANDOM_NUMBERS_ARRAY_HPP

#include <iostream>
#include <memory>
#include <random>
#include "constants.hpp"

template <typename T>
std::unique_ptr<T[]> generate_random_number(T min, T max, size_t size);

template <typename T>
std::unique_ptr<T[]> generate_random_number(T min, T max, size_t size) {

  std::unique_ptr<T[]> numbers{std::make_unique<T[]>(size)};

  std::random_device rd{};
  std::mt19937 mt{rd()};
  std::uniform_int_distribution<T> dist(min, max);

  for (size_t i = zero; i < size; ++i) {
    *(numbers.get() + i) = dist(mt);
  }

  return numbers;
}

#endif
