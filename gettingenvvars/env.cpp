#include <iostream>
#include <string>

int main() {
  std::string env_p = std::getenv("PATH");
  std::cout << "Your path is: " << env_p << std::endl;
  return 0;
}
