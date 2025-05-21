#include <iostream>

template <typename T>
void func(T t) {
  std::cout << t << std::endl;
}

template <typename T, typename... Args>
void func(T t, Args... args) {
  std::cout << t << std::endl;
  func(args...);
}

int main() {
  func(1, 2, 3, 4, 4.5, 6, 7, "Rishav Saha");
  func(1,3,4,55,6,66,"Miii");
  return 0;
}
