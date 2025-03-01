#include <iostream>
using namespace std;

int main() {
    int start, end, rows = 10;

    cout << "Enter the starting number of the range: ";
    cin >> start;
    cout << "Enter the ending number of the range: ";
    cin >> end;

    int cols = end - start + 1;  
    int tables[rows][cols];      

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            tables[j][i] = (start + i) * (j + 1);
        }
    }

    cout << "\nMultiplication tables from " << start << " to " << end << ":\n\n";
    for (int i = 0; i < cols; i++) {
        cout << "Table of " << (start + i) << ":\n";
        for (int j = 0; j < rows; j++) {
            cout << (start + i) << " x " << (j + 1) << " = " << tables[j][i] << endl;
        }
        cout << endl;
    }

    return 0;
}
