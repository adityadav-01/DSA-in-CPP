#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

node *head = NULL;

void insert(int n) {
    node *newnode = new node;
    newnode->data = n;
    newnode->next = head;
    head = newnode;
}


void search(int n) {
    node *temp = head;
    int pos = 1;
    while (temp != NULL) {
        if (temp->data == n) {
            cout << "Element " << n << " found at position " << pos << "." << endl;
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout << "Element " << n << " not found in the list." << endl;
}

void print() {
    cout << "ELEMENTS OF LINKED LIST: ";
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " | ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int ch, x;
    do {
        cout << "\nChoose an option: 1. INSERT 2. SEARCH 3. PRINT 4. EXIT : ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "ENTER THE DATA ELEMENT: ";
                cin >> x;
                insert(x);
                break;
            case 2:
                cout << "ENTER THE ELEMENT TO SEARCH: ";
                cin >> x;
                search(x);
                break;
            case 3:
                print();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid option" << endl;
                break;
        }
    } while (ch != 4);

    return 0;
}