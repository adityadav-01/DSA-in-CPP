#include <iostream >
using namespace std;
int main ()
{
    int a[10],n,temp;
    cout << "Enter size of array : ";
    cin >> n ;
    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Entered array elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        for( int j = i+1; j <n; j++)
        {
            if ( a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "\nSorted array in ascending order is : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}