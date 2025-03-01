#include <iostream>
using namespace std;
int main ()
{
    int array[10], n , x;
    cout<< " ENTER AARAY SIZE :";
    cin>> n;
    cout<< " ENTER AARAY ELEMENTS :";
    for  (int i=0; i < n; i++)
    {
        cin >> array [i];
    }   
cout << "ENTER THE ELEMENT AT THE BEGINNING : ";
cin >> x ;
for (int i=n-1 ; i >= 0; i--)
{
    array[i+1] =array[i];
}
array[0]= x;
n++;
cout <<"ARRAY ELEMENTS ARE : "  ;
for (int i=0; i < n; i++)
{
    cout << "\t" << array[i] ;
}
return 0;
}