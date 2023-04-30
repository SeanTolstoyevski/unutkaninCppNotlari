#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
 std::vector<int> m{1, 2, 3, 4, 5};
 int indexToMove{2};
 int nextIndex{indexToMove + 1};
 std::rotate(m.begin() + indexToMove, m.begin() + nextIndex, m.begin() + nextIndex + 1);
 for (int i : m)
 {
  std::cout << i << " ";
 }
 std::cout << std::endl;
 return 0;
}