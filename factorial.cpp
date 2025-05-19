#include <iostream>

int factorial(int n);

int main() {

  int n;
  std::cout << "Enter a value: ";
  std::cin >> n;

  std::cout << "Factorial of " << n << " is: " << factorial(n) << std::endl;
  return 0;
}

int factorial(int n) {
  if (n > 1) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
}