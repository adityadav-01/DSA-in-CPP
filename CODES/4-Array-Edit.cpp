#include <iostream>
using namespace std;
int main()
{
    int a[10],n,pos,x ;
    cout << "Enter size of the array : ";
    cin >> n;
    cout << "Enter Elements of the arrray : ";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
        cout << "All elements of the array is : ";
        for(int i=0; i<n; i++)
        {
            cout << a[i] <<"    ";
        }
            cout << "\nEnter the postion of the array to edit element : ";
            cin >> pos;
            cout << "Enter new value at postion no. : "<<pos <<" : ";
            cin >> x;
           
a[pos-1]=x;

     cout<<"After Edition of array elemensts are : ";
     for( int i = 0 ; i<n ; i++ )
     {
        cout<<a[i]<<"       ";
     }

}