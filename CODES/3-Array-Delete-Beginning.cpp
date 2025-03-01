#include <iostream >
using namespace std ;
int main ()
{
    int a [10],n;
    cout << "ENTER THE SIZE OF THE ARRAY : ";
    cin >> n ;
    cout << "ENTER THE ELEMENTS OF THE ARRAY : ";
    for (int i = 0; i <n ; ++i)
    {
        cin >> a[i] ;
    }
    cout << "ELEMENTS OF THE ARRAY IS : ";
    for (int i = 0; i <n ; ++i)
    {
        cout <<" " << a[i] ;
    }
    cout << "\nAFTER DELETATION OF 1st ELEMENT OF THE ARRAY : ";
    for (int i = 0; i <n-1 ; ++i)
    {
        a[i] =a[i+1];
    }
    n-- ;
    
    for (int i = 0; i <n ; ++i)
    {
        cout<< " " <<  a[i] ;
    }
}
