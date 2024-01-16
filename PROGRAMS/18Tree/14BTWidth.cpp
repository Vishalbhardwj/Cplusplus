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



int maxWidth(node *root){
    if(root==NULL){
        return 0;
    }
    queue<node *> q;
    q.push(root);

    int maxW=0;
    while(!q.empty()){

        int count=q.size();

        maxW=max(maxW,count);

        for(int i=0;i<count;i++){

            node *curr=q.front();
            q.pop();
          
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }

        }
        cout<<endl;
    }
    return maxW;
}


int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);

    

    cout<<"Maximum Width of Tree:";
    cout<<maxWidth(root)<<endl;
    
    
    
    return 0;
}