#include<iostream>
using namespace std;
struct node{
    int data;
    node *left,*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" | ";
    inorder(root->right);
}
node *search(node *root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data>key){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}
int main(){
    node *root=new node(50);
    root->left=new node(30);
    root->left->left=new node(20);
    root->left->right=new node(40);
    root->right=new node(70);
    root->right->left=new node(60);
    root->right->right=new node(80);
    inorder(root);
    int key ;
    cout<<"\nEnter key to search : ";
    cin>>key;
    if(search(root,key)==NULL){
        cout<<"Key doesn't exist.....";
    }else{
        cout<<"Key exist....";
    }
    return 0;
}