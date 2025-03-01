#include <iostream>
using namespace std ;
struct node
{             
    int data;
    node *next;
};
node *head = NULL;
void insert (int n)
{
    node *newnode = new node; // create new node named newnode
    newnode -> data = n; // assign data of new node which is n;
    newnode -> next = head;// assign next of new node which is now NULL
    head = newnode; // here we decalare newNode is now a head node
}
void print()
{
    cout << "Data elements in a single linked list : " ;
    node *temp = head;
    while (temp!= NULL)
    {
        cout << temp -> data << " | ";
        temp = temp -> next;
    }
}
int main ()
{
    insert (1);
    insert (3);
    insert (5);
    insert (7);
    insert (9);
    insert (10);
    print();
}