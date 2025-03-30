#include <iostream>

int main() {

    // std::string input_data{};
    char input_data[64];

    std::cout << "enter a name: ";
    // std::cin >> input_data;
    std::cin.get(input_data, 64);

    std::cout << "input_data: " << input_data << '\n';


    std::cout << "\n #(03:41:16): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
