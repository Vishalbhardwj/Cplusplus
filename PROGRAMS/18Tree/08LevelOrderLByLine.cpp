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


void levelOrderTLBL(node *root){
    if(root==NULL){ return ;}
    queue<node *> q ;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        node *curr=q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            q.push(NULL);
            continue;
        }
        cout<<curr->key<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}
void levelOrderNTLBL(node *root){
    if(root==NULL){
        return ;
    }
    queue<node *> q;
    q.push(root);
    while(!q.empty()){

        int count=q.size();

        for(int i=0;i<count;i++){

            node *curr=q.front();
            q.pop();
            cout<<curr->key<<" ";
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }

        }
        cout<<endl;
    }
}


int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(60);
    root->right->right->left=new node(70);
    root->right->right->right=new node(80);

    levelOrderTLBL(root);

    cout<<"Compare Them :"<<endl;
    levelOrderNTLBL(root);
    
    
    
    return 0;
}