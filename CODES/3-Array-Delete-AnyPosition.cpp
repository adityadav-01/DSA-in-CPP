#include <iostream>
using namespace std ;
int main ()
{
    int a [10],n , x;
    cout <<"ENTER THE SIZE OF THE ARRAY : ";
    cin >>  n ;
    cout << "ENTER THE ELEMENTS OF THE ARRAY : ";
    for(int i =0 ; i< n ; i++)
    {
        cin >> a[i] ;
    }
    cout << "ELEMENTS OF THE ARRAY IS : ";
    for(int i =0 ; i< n ; i++)
    {
        cout<<" "<< a[i] ;
    }
    cout << "\nENTER THE POSIITION OF THE ELEMEMNT TO DELETE : ";
    cin >> x;
    for(int i=x ; i<n ; i++)
    {
        a[i-1] = a[i];
    }
    n-- ;
    cout << "NEW ELEMENTS OF THE ARRAY IS : ";
    for(int i =0 ; i< n ; i++)
    {
        cout<<" "<< a[i] ;
    }
}