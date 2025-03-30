#include "constants.hpp"
#include "display_array.hpp"
#include "merge.hpp"
#include "random_numbers_array.hpp"
#include "selection_sort.hpp"
#include <iomanip>
#include <iostream>
#include <memory>

int main() {

  constexpr int min{0};
  constexpr int max{100};
  constexpr auto rnd_size{static_cast<size_t>(10)};

  std::unique_ptr nums1{generate_random_number(min, max, rnd_size)};
  std::unique_ptr nums2{generate_random_number(min, max, rnd_size)};

  display_array(nums1.get(), rnd_size, 6);
  display_array(nums2.get(), rnd_size, 6);

  selection_sort(nums1.get(), rnd_size);
  selection_sort(nums2.get(), rnd_size);

  display_array(nums1.get(), rnd_size, 6);
  display_array(nums2.get(), rnd_size, 6);

  std::unique_ptr result{merge_arryas(nums1.get(), nums2.get(), rnd_size, rnd_size)};

  display_array(result.get(), rnd_size * 2, 6);

  std::cout << "\n #(15:47:22): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
