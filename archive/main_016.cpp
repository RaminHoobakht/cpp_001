#include <iostream>

struct student {
  std::string name{};
  int age{};
  int score{};
};

int main() {

  static constexpr auto zero{static_cast<size_t>(0)};
  static constexpr auto size{static_cast<size_t>(3)};

  struct student st[3]{};
  struct student *pst{};

  for (size_t i{zero}; i < size; ++i) {
    std::cout << "enter name: ";
    std::cin >> st[i].name;
    /* --- */
    std::cout << "enter age: ";
    std::cin >> st[i].age;
    /* --- */
    std::cout << "enter score: ";
    std::cin >> st[i].score;
  }

  pst = st;

  for (size_t i{zero}; i < size; ++i) {
    std::cout << (pst + i)->name << '\n';
    std::cout << (pst + i)->age << '\n';
    std::cout << (pst + i)->score << '\n';
  }

  std::cout << "\n #(10:20:42): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
