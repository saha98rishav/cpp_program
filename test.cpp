#include <array>
#include <iostream>
using namespace std;

int main() {
  // What happens when we create an array like so?
  // We get an array with a single const char*!
  auto a1 = std::array{"foo"};
  for (auto e : a1) std::cout << e << ' ';
  std::cout << '\n';

  // If we want to separate the characters, we can use std::to_array
  auto a2 = std::to_array("foo");
  for (auto e : a2) std::cout << e << ' ';
  std::cout << '\n';

  return 0;
}
