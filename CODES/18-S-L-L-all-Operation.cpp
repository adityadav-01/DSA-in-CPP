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

void deleteAtPosition(int pos) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    node *temp = head;

    if (pos == 1) {
        head = temp->next;
        delete temp;
        return;
    }

    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Position out of bounds" << endl;
    } else {
        node *nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }
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
    int ch, x, pos;
    do {
        cout << "\nChoose an option: 1. INSERT at beginning 2. INSERT at specific position 3. DELETE 4. SEARCH 5. PRINT 6. EXIT : ";
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
                cout << "ENTER THE POSITION TO DELETE: ";
                cin >> pos;
                deleteAtPosition(pos);
                break;
            case 4:
                cout << "ENTER THE ELEMENT TO SEARCH: ";
                cin >> x;
                search(x);
                break;
            case 5:
                print();
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid option" << endl;
                break;
        }
    } while (ch != 6);

    return 0;
}
