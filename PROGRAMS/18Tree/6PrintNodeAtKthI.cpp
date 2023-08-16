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
void PrintKDist(node *root,int k){
    if(root==NULL) return ;
    if(k==0) cout<<root->data<<" ";
    else{
        PrintKDist(root->left,k-1);
        PrintKDist(root->right,k-1);
    }
}

int main(){
     node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->left->right=new node(90);
    root->right->right=new node(50);
    root->right->right->right=new node(34);
    root->right->right->left=new node(85);
    root->right->right->right->right=new node(120);
    PrintKDist(root,3);
    return 0;
}