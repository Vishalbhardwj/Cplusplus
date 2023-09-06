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

void preorder(node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);

    // Preorder Traversal:
    preorder(root);
    return 0;
}