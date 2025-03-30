#include <crow.h>
#include <iostream>
#include <unistd.h>

int main() {

  crow::SimpleApp app{};
  uint16_t port_number{18080};

  CROW_ROUTE(app, "/hello")
  ([]() {
    /* Code */
    sleep(3);
    return "\nHello World ...\n";
  });

  app.port(port_number).multithreaded().concurrency(50).run_async();
  std::cout << "server bootstrapping is over on " << port_number << '\n';

  std::cout << "\n #(21:44:40): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
