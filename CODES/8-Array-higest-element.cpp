#include <iostream>
using namespace std;
int main() {
    int a[5], n;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int highest = a[0];
    int position;

    for (int i = 1; i < n; i++) {
        if (a[i] > highest) {
            highest = a[i];
            position = i;
        }
    }

    cout << "The highest number is " << highest << " at position " << position + 1 << endl;
    return 0;
}