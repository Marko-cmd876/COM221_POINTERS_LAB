#include <iostream>
using namespace std;

int main() {
    int x = 20;
    int *p = &x;

    cout << "Before: " << x << endl;

    *p = 50;

    cout << "After: " << x << endl;

    return 0;
}