#include <iostream>
using namespace std ;

int stack[10],n,top=-1;
void push(int x){
    if(top==n-1){
        cout<<"Stack is Full !!! \n";
    }else {
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        cout<<"Stack is Empty !!!\n";
    }else{
        cout<<"poped element is :"<<stack[top]<<endl;
        top--;
    }
}

void peek(){
        if(top==-1){
        cout<<"Stack is Empty !!!\n";
    }else{
        cout<<"peek element is :"<<stack[top]<<endl;
    }
}
void display(){
    if(top >=0){
        cout<<"Stack elements are : \n";
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<endl;
        }
    }else{
        cout<<"Stack is Empty !!!\n";
    }
}

int main(){
    int choice,y;
    cout<<"Enter Size of Stack :";
    cin>>n;

    //for (choice=1;choice< 6;choice++)
     while (choice != 5){
        cout<<"Choose an operation : \n1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n5. EXIT \n";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter element to PUSH : ";
                cin>>y;
                push(y);
                break;
            case 2:
                    pop();
                    break;
            case 3: 
                    peek();
                    break;
            case 4:
                    display();
                    break;
            case 5:
                    cout<<"exiting....";
                    break;
            default: 
                    cout<<"Invalid choice ...\nReEnter the choice :\n";
        }
        
    }

    return 0;
}

