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

void inorder(node *root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " | ";
    inorder(root->right);
}

int main() {
    node *root = new node(50);
    root->left = new node(30);
    root->right = new node(70);
    root->left->left = new node(20);
    root->left->right = new node(40);
    root->right->left = new node(60);
    root->right->right = new node(80);

    cout << "Inorder Traversal (Before Deletion): ";
    inorder(root);

    cout << "\nDeleting Node 70...\n";
    root = del(root, 70);

    cout << "Inorder Traversal (After Deletion): ";
    inorder(root);

    return 0;
}