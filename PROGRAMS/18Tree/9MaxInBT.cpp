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

int MaxInBt(node *root){
    if(root==NULL){
        return 0;
    }
    return max(max(MaxInBt(root->left),MaxInBt(root->right)),root->data);
}

// Iterative Based Solution:
int maxInBt(node *root){
    if(root==NULL) return-1;
    queue<node *>q;
    int Max=INT16_MIN;
    q.push(root);
    while(q.empty()==false){
       
        node *cur=q.front();
        Max=max(Max,cur->data);
        q.pop();
        if(cur->left!=NULL){
            q.push(cur->left);
        }
        if(cur->right!=NULL){
            q.push(cur->right);
        }
    }
    return Max;

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

    cout<<MaxInBt(root)<<endl;
    cout<<maxInBt(root)<<endl;

    return 0;
}



