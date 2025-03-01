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

void deleteAtPosition(int pos) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    node *temp = head;

    // If the head needs to be removed
    if (pos == 1) {
        head = temp->next;  // Move head to the next node
        cout << "Deleted element is " << temp->data << " at position number " << pos << endl;
        delete temp;        // Delete the old head
        return;
    }

    // Traverse to the node just before the desired position
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // If position is out of bounds
    if (temp == NULL || temp->next == NULL) {
        cout << "Position out of bounds" << endl;
    } else {
        node *nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        cout << "Deleted element is " << nodeToDelete->data << " at position number " << pos << endl; // Print deleted element
        delete nodeToDelete; // Delete the node
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
        cout << "\nChoose an option: 1. INSERT 2. DELETE 3. PRINT 4. EXIT : ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "ENTER THE DATA ELEMENT: ";
                cin >> x;
                insert(x);
                break;
            case 2:
                cout << "ENTER THE POSITION TO DELETE: ";
                cin >> pos;
                deleteAtPosition(pos);
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