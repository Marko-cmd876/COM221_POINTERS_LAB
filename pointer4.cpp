#include <iostream>
using namespace std;

void changeValue(int *num) {
    *num = 100;
}

int main() {
    int x = 10;

    cout << "Before: " << x << endl;

    changeValue(&x);

    cout << "After: " << x << endl;

    return 0;
}