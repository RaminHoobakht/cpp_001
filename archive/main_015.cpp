#include <iostream>
#include <vector>

int main() {

  static constexpr auto zero{static_cast<size_t>(0)};

  size_t n{};
  int result{};
  std::string word{};
  std::vector<std::string> words{};

  std::cout << "how many words? ";
  std::cin >> n;

  for (size_t i{zero}; i < n; ++i) {
    std::cout << "type a word: ";
    std::cin >> word;
    words.emplace_back(word);
    word = "";
  }

  for (size_t i{zero}; i < n; ++i) {
    std::cout << words[i] << '\n';
  }

  for (size_t i{zero}; i < n; ++i) {
    for (size_t j{zero}; j < n - 1; ++j) {
      result = {words[j].compare(words[j + 1])};
      if (result > 0) {
        words[j].swap(words[j + 1]);
      }
    }
  }

  std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

  for (size_t i{zero}; i < n; ++i) {
    std::cout << words[i] << '\n';
  }

  std::cout << "\n #(12:46:21): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
