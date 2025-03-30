#include <iostream>
#include "../header/my_time.hpp"

int main() {

    MyTime::Time my_time{13, 12, 12};
    my_time.print_standard();
    my_time.print_universal();

    std::cout << "\n #(22:27:38): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
