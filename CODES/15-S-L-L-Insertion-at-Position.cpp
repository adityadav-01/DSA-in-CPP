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

void insertAtPosition(int n, int pos) {
    node *newnode = new node;
    newnode->data = n;
    if (pos == 1) {
        newnode->next = head;
        head = newnode;
        return;
    }

    node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL) {
        cout << "Position out of bounds" << endl;
    } else {
        newnode->next = temp->next;
        temp->next = newnode;
    }
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
    int ch, x, pos;
    do {
        cout << "\nChoose an option: 1. INSERT at beginning 2. INSERT at specific position 3. PRINT 4. EXIT : ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "ENTER THE DATA ELEMENT: ";
                cin >> x;
                insert(x);
                break;
            case 2:
                cout << "ENTER THE DATA ELEMENT: ";
                cin >> x;
                cout << "ENTER THE POSITION: ";
                cin >> pos;
                insertAtPosition(x, pos);
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