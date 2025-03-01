#include <iostream>
using namespace std;

int main() {
    // Example of a 2D array (3 rows, 3 columns)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Accessing elements
    cout << "First element (first row, first column): " << matrix[0][0] << endl;  // Output: 1
    cout << "Element at (second row, third column): " << matrix[1][2] << endl;    // Output: 6
    cout << "Element at (third row, second column): " << matrix[2][1] << endl;    // Output: 8

    // Looping through the 2D array
    cout << "Matrix elements:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
