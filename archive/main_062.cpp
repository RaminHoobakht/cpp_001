#include <iostream>

int main() {

    long long int my_number{0};

    std::cout << "enter an integer number: ";
    std::cin >> my_number;

    char *p{};
    p = reinterpret_cast<char *>(&my_number);

    for (size_t i{0}; i < sizeof(my_number); ++i) {
        std::cout << "part (" << i + 1 << ") " << static_cast<int>(*p) << '\n';
        p++;
    }


    std::cout << "\n #(05:22:18): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
