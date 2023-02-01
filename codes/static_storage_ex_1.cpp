#include <iostream>

class StaticStorageTest {
public:
  StaticStorageTest() noexcept { std::cout << "i am constructed\n"; }

  ~StaticStorageTest() { std::cout << "i am destructed\n"; }
};

StaticStorageTest sglobal = StaticStorageTest();

int main() {
  std::cout << "main basliyor\n";

  std::cout << "main bitiyor\n";

  return 0;
}