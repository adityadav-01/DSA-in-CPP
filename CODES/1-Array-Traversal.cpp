#include <iostream>
using namespace std ;

int main() {
    int a[5],n;
    cout <<"ENTER SIZE OF ARRAY : ";
    cin>>n;
    cout<< "ENTER THE ELEMENTS OF ARRAY : "<<endl;
    for(int i =0; i<n ; i++)
      {
    cin>>a[i];
      }

    cout<<"ELEMENTS ARE : ";
    
    //    Array Traversing

    for(int i =0; i<n ; i++)
      {
    cout<< "\t"  << a[i];
      }
    return 0;
}