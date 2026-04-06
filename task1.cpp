#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate integer
    int *num = new int;

    // Dynamically allocate string
    string *text = new string;

    // User input
    cout << "Enter an integer: ";
    cin >> *num;

    cout << "Enter a string: ";
    cin >> *text;

    // Output values
    cout << "Integer value: " << *num << endl;
    cout << "String value: " << *text << endl;

    // Free memory
    delete num;
    delete text;

    return 0;
}