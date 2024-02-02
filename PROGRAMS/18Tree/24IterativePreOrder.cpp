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

// This maked by me :For Preorder very similar to iterative solution which i just have saw!
void iterativePreorder(node *root){
    stack<node *>s;
    node* curr=root;
    while(curr!=NULL||!s.empty()){
        while(curr!=NULL){
            s.push(curr);
            cout<<curr->key<<" ";
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        curr=curr->right;
    }
}

void iterativePreOrder(node *root){
    if(root==NULL) return ;

    stack<node *> s;
    s.push(root);
    while(!s.empty()){
        node *curr=s.top();
        s.pop();
        cout<<curr->key<<" ";
        if(curr->right!=NULL){ s.push(curr->right);}
        if(curr->left!=NULL){ s.push(curr->left);}
    }

}





int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->left=new node(60);
    root->right->right=new node(70);
    root->left->left->left=new node(80);
    root->left->left->right=new node(90);

  
    
    

//  Both Solution are same as timecomplexity wise:
    iterativePreorder(root);
    cout<<endl;
    iterativePreOrder(root);
  




    return 0;
}