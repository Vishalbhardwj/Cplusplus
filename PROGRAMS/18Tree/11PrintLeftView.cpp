#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
    int key;
    node *left,*right;

    node(int k){
        key=k;
        left=right=NULL;
    }
};
 
// Recurrsive Approach: Using Preorder and Two Variable :Maxlevel,level.
int maxlevel=0;
void printLeftV(node *root,int level){
    if(root==NULL){
        return ;
    }
    if(maxlevel<level){
        cout<<root->key<<" ";
        maxlevel=level;
    }
    printLeftV(root->left,level+1);
    printLeftV(root->right,level+1);
}


// Iterative Approach:Using level Order Traversal.

void printLeftVi(node *root){
    if(root==NULL){
        return ;
    }
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        int count=q.size();
        for(int i=0;i<count;i++){
            node *curr=q.front();
            q.pop();
            if(i==0){
                cout<<curr->key<<" ";
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }

        }
    }
}


int main(){

    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);
    root->right->left->right=new node(2000);

    cout<<"Recursive"<<endl;
    printLeftV(root,1);
    cout<<endl;
    cout<<"Iterative"<<endl;
    printLeftVi(root);

    return 0;
}