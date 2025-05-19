#include <iostream>
using namespace std;

int main() {
    int card = 40;
    int mycard;
    int *myp = &card;
    mycard = *myp;
    printf("card -> %d\n", card);
    printf("*myp -> %p\n", myp);
    printf("mycard -> %d\n", mycard);
    printf("mycard -> %p\n", &mycard);

    *myp += 40;
    
    printf("\nAfter operation -> *myp += 40\n\n");
    printf("card -> %d\n", card);
    printf("*myp -> %p\n", myp);
    printf("mycard -> %d\n", mycard);
    printf("mycard -> %p\n", &mycard);
    
    return 0;
}