#include <iostream>

using std::size_t;

using dim2 = struct dim2_st {
  private:  

  static unsigned int number;

  public:
  dim2_st() = default;
  static unsigned int set_value(unsigned int _n){
    if(_n <= 2){
      dim2_st::number = _n;
    }
    return dim2_st::number;
  }

  static unsigned int add_one(){
    if(dim2_st::number < 2) {
      dim2_st::number++;
    }
    return dim2_st::number;
  }

  static unsigned int subtract_on() {
    if(dim2_st::number > 0) {
      dim2_st::number--;
    }
    return dim2_st::number;
  }
};

unsigned int dim2::number = 0;

int main() {

  int matrix[][3]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

  /* size is the number of rows */
  size_t row_no = sizeof(matrix) / sizeof(*matrix);

  for (auto i = static_cast<size_t>(0); i < row_no; ++i) {
    std::cout << *(*(matrix + i) + dim2::set_value(i)) << '\n';
  }

  std::cout << "size is: " << row_no << '\n';

  std::cout << "\n #(02:44:36): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}
