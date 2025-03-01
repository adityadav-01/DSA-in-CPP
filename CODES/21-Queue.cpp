#include <iostream>
using namespace std;

int queue[10], n, front = -1, rear = -1;
void enqueue(int x) {
    if (rear == n - 1) {
        cout << "Queue is Full !!!\n";
    } else {
        if (front == -1) front = 0; // Initialize front on first enqueue
        rear++;
        queue[rear] = x;
    }
}
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty !!!\n";
    } else {
        cout << "Dequeued element is: " << queue[front] << endl;
        front++;
    }
}
void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty !!!\n";
    } else {
        cout << "Front element is: " << queue[front] << endl;
    }
}
void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty !!!\n";
    } else {
        cout << "Queue elements are: \n";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " | ";
        }
        cout << endl;
    }
}
int main() {
    int choice, y;
    cout << "Enter Size of Queue: ";
    cin >> n;

    do {
        cout << "Choose an operation: 1. ENQUEUE 2. DEQUEUE 3. PEEK 4. DISPLAY 5. EXIT :  ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter element to ENQUEUE: ";
                cin >> y;
                enqueue(y);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice...\nRe-enter the choice:\n";
        }
    } while (choice != 5);

    return 0;
}
