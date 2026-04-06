#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get dimensions
    cout << "Enter number of rows (max 3): ";
    cin >> rows;

    cout << "Enter number of columns (max 3): ";
    cin >> cols;

    // Validate input
    if (rows > 3 || cols > 3) {
        cout << "Error: Maximum size is 3x3 only!" << endl;
        return 1;
    }

    // Dynamic allocation
    double **arr = new double*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new double[cols];
    }

    // Input values
    cout << "Enter values:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Output values
    cout << "Array values:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}