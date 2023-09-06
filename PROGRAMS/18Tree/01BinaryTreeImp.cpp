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
    node *root=new node(30);
    root->left=new node(50);
    root->right=new node(10);
    root->left->left=new node(60);
    root->left->right=new node(20);
    root->right->left=new node(1);
    root->left->right->left=new node(30);

    // inorder Traversal:

    inorder(root);

}