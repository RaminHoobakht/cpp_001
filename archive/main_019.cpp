#include <fstream>
#include <iostream>

int main() {

  constexpr char file_name[]{"ramin.dat"};
  constexpr char error_mesage[]{"error in open file"};
  constexpr char success_mesage[]{"file is open successfuly ..."};

  char ch{};
  int key_buf{};

  std::ifstream in_file{};
  std::ofstream out_file{};

  /* ------------------ */

  out_file.open(file_name, std::ios::out);
  if (!out_file) {
    perror(error_mesage);
    exit(EXIT_FAILURE);
  }

  std::cout << success_mesage << '\n';

  do {
    std::cout << "enter a char: ";
    std::cin.get(ch);
    out_file.put(ch);

    while ((key_buf = std::getc(stdin)) != '\n')
      ;

  } while (ch != '$');

  if (out_file.is_open()) {
    out_file.close();
  }

  /* ------------------- */

  in_file.open(file_name, std::ios::in);
  if (!in_file) {
    perror(error_mesage);
    exit(EXIT_FAILURE);
  }

  std::cout << std::endl;

  while (!in_file.eof()) {
    ch = static_cast<char>(in_file.get());
    std::cout << ch << '\x20';
  }

  if (in_file.is_open()) {
    in_file.close();
  }

  std::cout << "\n #(16:15:34): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
