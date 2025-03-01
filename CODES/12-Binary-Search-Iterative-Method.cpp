#include<iostream>
using namespace std;
    int a[10],n,x,i;
int binary(int low, int high)
{
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]>x)
        {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return -1; 
}
int main()
{
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array in ascending ordeer : ";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout <<"Enter the elment to search : ";
    cin >>x;
    int result = binary(0,n-1);
    if(result == -1)
    {
    cout << x << " not found in array";
   }    
   else{
    cout << x << " found at index " << result;
   }
    return 0;
}