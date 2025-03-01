#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head=NULL;

void insert(int n){
    node *newnode =new node;
    newnode->data=n;
    newnode->next=head;
    head=newnode;
}

void insertAtEND(int n){
    node *newnode =new node;
    newnode->data=n;
    newnode->next=NULL;
    if(head == NULL){
        head=newnode;
    }
    else{
        node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void print(){
    cout<<"ELEMENTS OF LINKED LIST : ";
    node *temp=head;
    while(temp != NULL){
        cout<<temp->data<<" | ";
        temp=temp->next;
    }
}

int main(){
    int ch,n;
    do{
        cout<<"\nChoose any one Option : 1. INSERT : 2. INSERT AT THE END : 3. PRINT : 4. EXIT :";
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"ENTER THE DATA ELEMENT : ";
            cin>>n;
            insert(n);
            break;
            case 2:
            cout<<"ENTER THE DATA AT THE END : ";
            cin>>n;
            insertAtEND(n);
            break;
            case 3:
            print();
            cout<<"\n";
            break;
            case 4:
            cout<<"Exiting..........";
            break;
            default :
            cout<<"Invalit option : ";
            break;
        }
    }
    while(ch !=4);
    return 0;
}