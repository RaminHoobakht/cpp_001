#include <exception>
#include <fstream>
#include <iostream>

int main() {

  static constexpr auto zero{static_cast<size_t>(0)};
  static constexpr auto max{static_cast<size_t>(5)};

  char err_msg[]{"error in file open"};
  char file_name[]{"ramin3.dat"};
  char buffer[128];
  std::ofstream out_file{};
  std::ifstream in_file{};

  try {

    out_file.open(file_name, std::ios::out | std::ios::binary);

    if (!out_file) {
      throw std::exception();
    }

  } catch (std::exception &ex) {
    std::cerr << err_msg << std::endl;
    exit(EXIT_FAILURE);
  }

  for (size_t i{zero}; i < max; ++i) {
    std::cin >> buffer;
    out_file << buffer << '\n';
  }

  if (out_file.is_open()) {
    out_file.close();
  }

  /* ------------------------- */

  try {

    in_file.open(file_name, std::ios::in | std::ios::binary);

    if (!in_file) {
      throw std::exception();
    }

  } catch (std::exception &ex) {
    std::cerr << err_msg << std::endl;
    exit(EXIT_FAILURE);
  }

  std::cout << "\n\n";
  while(!in_file.eof()) {
    in_file >> buffer;
    std::cout << buffer << '\x20';
  }
  std::cout << "\n\n";

  if(in_file.is_open()) {
    in_file.close();
  }

  std::cout << "\n #(20:37:43): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
