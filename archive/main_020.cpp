/* save data to a binary file */

#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
  

  char ch{};
  int key_buf{};

  constexpr char nl{'\n'};
  constexpr char file_name[]{"ramin2.dat"};
  constexpr char err_msg[]{"error in open file"};
  constexpr char succ_msg[]{"file was open successfully ..."};

  std::ifstream in_file{};
  std::ofstream out_file{};

  /* ----------------- */

  out_file.open(file_name, std::ios::binary);
  if(!out_file) {
    perror(err_msg);
    exit(EXIT_FAILURE);
  }

  std::cout << nl << succ_msg << nl;

  do {
    std::cout << "enter a character: ";
    std::cin.get(ch);
    while((key_buf = std::fgetc(stdin)) != nl );
    out_file.put(ch);
  } while(ch != '$');

  if(out_file.is_open()) {
    out_file.close();
  }

  /* ----------------- */


  in_file.open(file_name, std::ios::binary);
  if(!in_file) {
    perror(err_msg);
    exit(EXIT_FAILURE);
  }

  while(!in_file.eof()){
    ch = static_cast<char>(in_file.get());
    std::cout << std::setw(4) << ch;
  }

  if(in_file.is_open()){
    in_file.close();
  }


  std::cout << "\n #(17:21:52): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
