#include<iostream>
using namespace std;
int a[10], b[10],x,y;
int main(){
    cout<<"size of 1st array : ";
    cin>>x;
    cout<<"elements of 1st array : ";
    for(int i=0; i<x; i++){
        cin>>a[i];
    }
    cout<<"size of 2nd array : ";
    cin>>y;
    cout<<"elements of 2nd array : ";
    for(int j=0; j<y; j++){
        cin>>a[x+j];
    }
    cout<<"Elements of merged array : ";
    for(int i=0; i<x+y; i++){
        cout<<a[i]<<" | ";
    }

    for(int i=0; i<x+y; i++){
        for(int j=i+1; j<x+y; j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"\nShorted Merged array : ";
    for(int i=0;i<x+y;i++){
        cout<<a[i]<<" | ";
    }
return 0;
}