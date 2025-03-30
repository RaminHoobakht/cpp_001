#include <fstream>
#include <iostream>

int main() {

  static constexpr auto zero{static_cast<size_t>(0)};
  static constexpr auto size{static_cast<size_t>(16)};

  static constexpr char file_name[]{"mariam.dat"};
  static constexpr char err_msg[]{"error in open file"};

  int numbers[size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
  int my_numbers[size]{};
  int total{};

  std::ofstream out_file{};
  std::ifstream in_file{};

  out_file.open(file_name, std::ios::out | std::ios::binary);
  if (!out_file) {
    perror(err_msg);
    exit(EXIT_FAILURE);
  }

  out_file.write(reinterpret_cast<char *>(numbers), sizeof(numbers));

  if (out_file.is_open()) {
    out_file.close();
  }

  /* ---------------------------- */

  in_file.open(file_name, std::ios::in | std::ios::binary);
  if (!in_file) {
    perror(err_msg);
    exit(EXIT_FAILURE);
  }

  in_file.read(reinterpret_cast<char *>(my_numbers), sizeof(numbers));

  for (size_t i{zero}; i < size; ++i) {
    std::cout << my_numbers[i] << '\x20';
    total += my_numbers[i];
  }

  std::cout << '\n';

  if (in_file.is_open()) {
    in_file.close();
  }

  std::cout << "Totla: " << total << '\n';

  std::cout << "\n #(19:25:17): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
