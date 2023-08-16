#include <iostream>
#include <stack>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void iterativeInorder(node *root){
    stack <node *> s;
    node *cur=root;
    while(cur!=NULL||!s.empty()){
        while(cur!=NULL){
            s.push(cur);
            cur=cur->left;
        }
        cur=s.top(); s.pop();
        cout<<cur->data<<" ";
        cur=cur->right;
    }
    
}

int main(void)
{

    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->left->right = new node(90);
    root->right->right = new node(50);
    root->right->right->right = new node(34);
    root->right->right->left = new node(85);
    root->right->right->right->right = new node(120);

    // Iterative inorder Traversal printing node data:

    iterativeInorder(root);


   
}