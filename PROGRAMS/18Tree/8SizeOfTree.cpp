#include<iostream>
#include<queue>
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

int getSize(node *root){
    if(root==NULL) return 0;
    
    return getSize(root->left)+getSize(root->right)+1;
}

int GetSize(node *root){
    if(root==NULL) return -1;
    queue <node*> q;
    int count=0;
    q.push(root);
    while(q.empty()==false){
        node *cur=q.front();
        q.pop();
        if(cur->left!=NULL)
            q.push(cur->left);
        if(cur->right)
            q.push(cur->right);
            count++;
    }
    return count;
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

    // Give the no of Node:  Recursive method:Time C:O(n),AS:O(Height);
    cout<<getSize(root)<<endl;

    // Give the no of Node: Iterative method: Time C:O(n),AS:O(width of queue)
    cout<<GetSize(root);


    return 0;
}