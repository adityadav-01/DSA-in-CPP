#include<iostream>
using namespace std;
int a[10],n,v,p,x,i,temp;
int main(){
    cout<<"Enter size of the Array : ";
    cin>>n;
    cout<<"Enter elements of the Array : ";
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    
    while(v!=6){
        cout<<"\nSelect on of the operation \n1: Insertation | 2: Deletation | 3: Seaching | 4: Editation | 5:Shorting | 6: Existing | ";
        cin>>v;
        if(v==1){           //Inseration
        cout<<"Enter index number of element to insert  : ";
        cin>>p;
        cout<<"Enter new element at index number "<<p<<" : ";
        cin>>x;
        for(int i =n-1;i>=p;i--){
            a[i+1]=a[i];
        }
        n++;
        a[p]=x;
        cout<<"Updated array is : ";
        for(int i =0;i<n;i++){
        cout<<a[i]<<" | ";
        }
        }
        else if(v==2){          //Deletation
        cout<<"Enter index number of element to delete : ";
        cin>>p;
        for(int i=p+1;i<n;i++){
            a[i-1]=a[i];
        }
        n--;
        cout<<"Updated array is : ";
        for(int i =0;i<n;i++){
        cout<<a[i]<<" | ";
        }
        }
        else if(v==3){          //Searchinhg
            cout<<"Enter element to search : ";
            cin>>x;
            for(int i=0;i<n;i++){
                if(a[i]==x){
                    cout<<"Element found at index number : "<<i;
                    break;
                }
            }
            if(i==n){
                cout<<"Not found : ";
            }
        }
        else if(v==4){          //Editation
            cout<<"Enter index number to edit : ";
            cin>>p;
            cout<<"Enter new value at index number ("<<p<<") : ";
            cin>>x;
            a[p]=x;
            cout<<"Updated array is : ";
            for(int i =0;i<n;i++){
            cout<<a[i]<<" | ";
        }
        }
        else if(v==5){          //Bouble Shorting
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(a[i]>a[j]){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
        cout<<"Sorted array is : ";
        for(int i=0;i<n;i++){
            cout<<a[i]<<" -> ";
        }
        }
        else
        cout<<"Invalid choice  ";
    }
    cout<<"Exiting.....";
    return 0;
}

