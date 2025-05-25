#include <iostream>
using namespace std;

int main() {
    // int my_num[5] = {2, 3, 4, 5, 6};

    // for (int i = 0; i < 5; i++) {
    //     cout << my_num[i] << "\n";
    // }

    // cout << "\n\nBreak\n\n";

    // for (int i : my_num) {
    //     cout << i << "\n";
    // }

    char mystring[] = "Rishav0Saha";

    for (int i = 0; mystring[i]; i++)
        cout << mystring[i] << " ";
    cout << "\n\n";

    for (char *cp = mystring; *cp != 0; cp++)
        cout << *cp << " ";

    cout << "\n\n";
    return 0;
}
