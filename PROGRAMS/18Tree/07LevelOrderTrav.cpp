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

    void printLevel(node *root){
    if(root==NULL) return ;
    queue <node*> q;
    q.push(root);
    while(q.empty()==false){
        node *cur=q.front();
        q.pop(); 
        cout<<cur->data<<" ";
        if(cur->left!=NULL)
            q.push(cur->left);
        if(cur->right!=NULL)
            q.push(cur->right);
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

    printLevel(root);

    return 0;
}