#include <iostream>
using namespace std;

struct node {
    int data;
    node *left, *right;

    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node *insert(node *root, int val) {
    if (root == NULL) {
        return new node(val);
    }
    if (root->data > val) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

void inorder(node *root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " | ";
    inorder(root->right);
}

node *search(node *root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }
    if (root->data > key) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}

node *inorderSucc(node *root) {
    node *curr = root;
    while (curr && curr->left != NULL) {
        curr = curr->left;
    }
    return curr;
}

node *del(node *root, int key) {
    if (root == NULL) {
        return NULL;
    }
    if (key < root->data) {
        root->left = del(root->left, key);
    } else if (key > root->data) {
        root->right = del(root->right, key);
    } else {
        if (root->left == NULL) {
            node *temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            node *temp = root->left;
            delete root;
            return temp;
        }
        node *temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = del(root->right, temp->data);
    }
    return root;
}

int main() {
    int n, val, ch;
    node *root = NULL;

    do {
        cout << "\nEnter Operation:\n";
        cout << "1: Insertion\n2: Deletion\n3: Searching\n4: Display\n5: Exit\n";
        cout << "Choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter number of Nodes: ";
                cin >> n;
                cout << "Enter " << n << " values: ";
                for (int i = 0; i < n; i++) {
                    cin >> val;
                    root = insert(root, val);
                }
                break;

            case 2:
                cout << "Enter the value to delete: ";
                cin >> val;
                cout<<"Before delete: ";
                inorder(root);
                root = del(root, val);
                cout<<"\nAfter delete : ";
                inorder(root);
                break;

            case 3:
                int key;
                cout << "Enter the value to search: ";
                cin >> key;
                if (search(root, key) == NULL) {
                    cout << "Key doesn't exist.\n";
                } else {
                    cout << "Key exists.\n";
                }
                break;

            case 4:
                cout << "Inorder Traversal: ";
                inorder(root);
                cout << endl;
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice. Try again.\n";
        }
    } while (ch != 5);

    return 0;
}
