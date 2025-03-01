#include <iostream>
using namespace std;
int main ()
{
     int a[10] ,n ,x;
     cout <<"ENTER THE SIZE OF ARRAY : ";
     cin >> n ;
     cout <<"ENTER THE ELEMNTS OF THE ARRAY : ";
     for (int i = 0; i <n; i++)
     {
        cin >> a[i] ;
     }

             cout <<"ARRAY IS : ";
             for (int i = 0; i <n; i++)
             {
                cout <<" " << a[i] ;
             }

     cout << "\nENTER THE LAST ELEMENT OF THE ARRAY : ";
     cin >> x ;

     a[n] = x;
     cout << "NEW ARRAY IS : ";
     for (int i=0; i <=n; i++)
     {
        cout <<" " << a[i] ;
     }
return 0;
}