#include <iomanip>
#include <iostream>

int main() {

    auto constexpr zero{static_cast<size_t>(0)};
    auto constexpr row_no{static_cast<size_t>(3)};
    auto constexpr col_no{static_cast<size_t>(3)};
    int result{};

    constexpr int matrix1[row_no][col_no]{
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9},
    };

    constexpr int matrix2[row_no][col_no]{
            {10, 20, 30},
            {40, 50, 60},
            {70, 80, 90},
    };

    int matrix3[row_no][col_no]{0};

    for (size_t row = zero; row < row_no; ++row) {
        for (size_t col = zero; col < col_no; ++col) {
            for (size_t rc = zero; rc < col_no; ++rc) {
                // result += matrix1[row][col] * matrix2[rc][col];
                result += matrix1[row][rc] * matrix2[rc][col];
            }
            matrix3[row][col] = result;
            result = 0;
        }
    }

    for (size_t r = zero; r < row_no; ++r) {
        for (size_t c = zero; c < row_no; ++c) {
            std::cout << std::setw(4) << matrix3[r][c] << '\x20';
        }
        std::cout << '\n';
    }

    std::cout << "\n #(16.24.20): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

/* ---------------------------------------------------------------------- */

void copilot() {
    auto constexpr zero{static_cast<size_t>(0)};
    auto constexpr row_no{static_cast<size_t>(3)};
    auto constexpr col_no{static_cast<size_t>(3)};
    int result{};

    constexpr int matrix1[row_no][col_no]{
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9},
    };

    constexpr int matrix2[row_no][col_no]{
            {10, 20, 30},
            {40, 50, 60},
            {70, 80, 90},
    };

    int matrix3[row_no][col_no]{0};

    for (size_t row = zero; row < row_no; ++row) {
        for (size_t col = zero; col < col_no; ++col) {
            for (size_t rc = zero; rc < col_no; ++rc) { // Corrected loop
                result += matrix1[row][rc] * matrix2[rc][col]; // Corrected indices
            }
            matrix3[row][col] = result;
            result = 0;
        }
    }

    for (size_t r = zero; r < row_no; ++r) {
        for (size_t c = zero; c < col_no; ++c) {
            std::cout << std::setw(4) << matrix3[r][c] << ' ';
        }
        std::cout << '\n';
    }
}
