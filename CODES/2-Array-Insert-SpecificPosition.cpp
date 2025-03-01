#include <iostream>
using namespace std ;
int main ()
{
    int a[10],n,x, pos;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout<<" ARRAY ARE : ";
    for (int i = 0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n Enter the insertion location :";
    cin >> pos;
    cout << "Enter the value to insert : ";
    cin >> x;
    for (int i =n-1 ;i>=pos-1 ; i--)
    {
        a[i+1] = a[i];
    }
    a[pos-1] = x;
    n++;
    cout <<" NEW  ARRAY : ";
    for (int i = 0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}