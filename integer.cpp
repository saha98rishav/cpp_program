#include <cstdint>
#include <iostream>
using namespace std;

int main() {
    printf("Size in byte: %ld\n", sizeof(int64_t));
    printf("Size in bit: %ld\n", sizeof(int64_t) * 8);

    int fun = 0b00010110;
    printf("Fun is: %d\n", fun);
    cout << "Fun is: " << fun << endl;

    return 0;
}

/*
8 bit = 1 byte
1 bit = 1/8 byte
64 bit = (1/8)*64 = 64/8 = 8 byte
*/