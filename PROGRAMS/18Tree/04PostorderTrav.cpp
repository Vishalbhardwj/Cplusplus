#include<iostream>
using namespace std;

struct node{
    int key;
    node *left,*right;

    node(int k){
        key=k;
        left=right=NULL;
    }
};

void postOrderTrav(node *root){
    if(root!=NULL){
        postOrderTrav(root->left);
        postOrderTrav(root->right);
        cout<<root->key<<" ";
    }
}



int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);

    postOrderTrav(root);
    
    
    
    return 0;
}