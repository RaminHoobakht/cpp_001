#include <iostream>
#include <print>


int main() {
    /* how to print double number without rounding? */
    double my_number{123.69859};

    /* it will round the my_number. output is: 123.699 */
    std::cout << "value of my_number is: " << my_number << '\n';
    std::printf("value of my_number is: %.5f\n", my_number);

    std::cout << "\n #(05:08:12): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
