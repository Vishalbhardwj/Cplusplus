#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;

    node(int d){
        data=d;
        left=right=NULL;
    }
};

void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);

    // Inorder Traversal:

    inorder(root);

    return 0;
}