#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
    int key;
    node *left,*right;
    node(int x){
        key=x;
        left=right=NULL;

    }
};

void iterativeInorder(node *root){
    stack<node *>s;
    node* curr=root;

    while(curr!=NULL||!s.empty()){
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->key<<" ";
        curr=curr->right;
    }
}

int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
  
    iterativeInorder(root);



    return 0;
}