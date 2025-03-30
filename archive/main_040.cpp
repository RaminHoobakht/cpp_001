#include <iostream>
#include <unistd.h>

#define LOG_LEVEL 1

static constexpr auto nl{'\n'};

class my_logger {

private:
  std::string name_{};

public:
  explicit my_logger(const std::string &name) noexcept {
    this->name_ = name;
    std::clog << "You are in the " << this->name_ << " function ..." << nl;
  }

  ~my_logger() noexcept {
    std::clog << "You was exit form the " << this->name_ << " function ..."
              << nl;
  }
};

#if LOG_LEVEL == 1
#define SAVE_LOG my_logger{__func__};
#else
#define LOG_LEVEL 0
#endif

void do_something() noexcept;

int main() {

  SAVE_LOG

  std::cout << "Hello I am main ..." << nl;

  do_something();

  sleep(5);

  std::cout << "\n #(19:09:42): The End ..." << std::endl;
  return (EXIT_SUCCESS);
}

void do_something() noexcept { SAVE_LOG }