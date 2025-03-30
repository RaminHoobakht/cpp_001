#include "../header/my_queue.hpp"
#include <iostream>

/* -------------------------- */

int main() {

  mq::queue q{};

  q.set();
  q.insert('a');
  q.insert('b');
  q.insert('c');
  q.insert('d');

  for (int i{0}; i < 8; ++i) {
    std::cout << q.remove() << '\n';
  }

  std::cout << "\n #(15:20:18): The End ..." << std::endl;
  return (EXIT_SUCCESS);
ear

