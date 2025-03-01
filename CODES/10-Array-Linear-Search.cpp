#include <iostream>
using namespace std;

int main() {
    int a[10], n, x;

    cout << "Enter the size of the array (max 10): ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the element to search: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << "Element found at index: " << i << endl;
            return 0; // Exit after finding the element
        }
    }

    cout << "Element not found." << endl;
    return 0;
}
