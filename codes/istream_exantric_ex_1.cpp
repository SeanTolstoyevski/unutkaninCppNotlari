#include <iostream>

int main() {
  for (int val{}; std::cin >> val;) {
    std::cout << "val = " << val << std::endl;
  }
  std::cout << "programdan cikiliyor\n";
  return 0;
}