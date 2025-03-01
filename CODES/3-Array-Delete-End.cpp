#include <iostream>
using namespace std;
int main ()
{
    int a[10],n ;
    cout <<"ENTER THE SIZE OF THE ARRAY : ";
    cin >> n;
    cout << "ENTER THE ELEMENTS OF THE ARRAY : ";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << "ELEMENTS OF THE ARRAY IS : ";
    for(int i=0; i<n; i++)
    {
        cout <<" " << a[i];
    }
    cout << "\nAFTER THE DELETEATION :";
    n--;
    for(int i=0; i<n; i++)
    {
        cout <<" " << a[i];
    }

}