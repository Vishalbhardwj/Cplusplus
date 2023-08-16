#include<iostream>
#include<bits/stdc++.h>
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

int Height(node *root){
    if(root==NULL){
        return 0;
    }
    return max(Height(root->left),Height(root->right))+1;
}

int main(){
     node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);
    root->right->right->right=new node(34);
    root->right->right->right->right=new node(120);
    // Height of Tree:
    cout<<Height(root)<<endl;


    return 0;
}