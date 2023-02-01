#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <vector>

template <typename T> void print_vector(const T &vec) noexcept {
  std::stringstream vectoredOut;
  vectoredOut << "[";
  if (vec.size() < 1) {
    vectoredOut << "]\n";
    std::cout << vectoredOut.str();
    return;
  }
  for (const auto &item : vec) {
    vectoredOut << item << ", ";
  }
  vectoredOut << "]\n";
  auto out = vectoredOut.str();
  out.erase(out.size() - 4, 2); // son bloktaki ", " kaldiriyoruz.
  std::cout << out;
}

int main() {
  std::vector<std::string> memberNames{
      "emre", "murat", "ozlem", "yavuz", "selim", "yildiz", "ahmet",
      // duplicate
      "murat", "yildiz", "halil", "adem", "ozan"};
  std::cout << "vector'un ilk hali:\n";
  print_vector(memberNames);
  sort(memberNames.begin(), memberNames.end());

  std::cout << "vector'un siralandiktan sonraki hali:\n";
  print_vector(memberNames);

  decltype(memberNames) uniqueMemberNames;
  std::unique_copy(memberNames.begin(), memberNames.end(),
                   std::back_inserter(uniqueMemberNames));

  std::cout << "vector'un unique olarak kopyalanmis hali:\n";
  print_vector(uniqueMemberNames);
  return 0;
}
