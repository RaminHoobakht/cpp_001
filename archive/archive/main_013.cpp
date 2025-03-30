#include <iostream>


int main() {

    int number[]{7, 16, 21, 32, 63, 51, 4, 89, 20, 12};
    size_t size = sizeof(number) / sizeof(*number);

    int *pf{number};
    int *pl{number + (size - 1)};

    do {
        std::cout << (*pf + *pl) << ' \n';
        
    } while (pf != pl);


    std::cout << "\n #(22:53:06): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
