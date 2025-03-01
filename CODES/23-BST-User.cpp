#include <iostream>
using namespace std;

struct node {
    int data;
    node *left, *right;

    // Constructor to create a new node
    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to insert a value into the BST
node *insert(node *root, int val) {
    if (root == NULL) {
        return new node(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

// Function for in-order traversal
void inorder(node *root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " | ";
    inorder(root->right);
}

int main() {
    node *root = NULL; // Start with an empty tree

    int n;
    cout << "Enter the number of nodes you want to insert: ";
    cin >> n; // Number of values user wants to insert

    cout << "Enter the values: " << endl;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val; // Take the value from the user
        root = insert(root, val); // Insert it into the BST
    }

    cout << "In-order traversal of the BST: ";
    inorder(root); // Print the BST in sorted order
    cout << endl;

    return 0;
}
