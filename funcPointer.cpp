#include <iostream>
using namespace std;

void interesting() {
  puts("I am interesting");
}

int main() {

  void (*pointsToInteresting)() = interesting;
  (*pointsToInteresting)();
  return 0;
}