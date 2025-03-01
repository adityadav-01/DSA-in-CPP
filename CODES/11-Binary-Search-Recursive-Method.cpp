#include <iostream>
using namespace std;
int a[10],n,x;
int binary(int low , int high){
if (low<=high) 
{
    int mid = (low + high)/2;
    if (a[mid] == x)
    return mid;
    else if (a[mid] < x)
    return binary(mid + 1, high);
    else
    return binary(low, mid - 1);
}    else
        return -1;
}
int main()
{
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Enter the element to search: ";
    cin >> x;
    int result = binary(0, n - 1);
    if (result==-1){
        cout << x << " is not present in array";
    }
    else{
        cout << x << " is present at index " << result;
    }
    return 0;
}