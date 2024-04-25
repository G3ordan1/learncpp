#include "version.h"
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << argv[0] << " Version: " << VERSION_MAJOR << "."
              << VERSION_MINOR << std::endl;
    std::cout << "Usage: ./helloworld please" << std::endl;
    return 1;
  }
  std::cout << "Hello, world!" << std::endl;
  return 0;
}
