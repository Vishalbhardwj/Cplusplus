#include<iostream>
#include<stack>
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

void iterativePreorder(node *root){
    if(root==NULL) return ;

    stack<node *> s;
    node *cur=root;
    while(cur!=NULL||s.empty()==false){

    while(cur!=NULL){
        s.push(cur);
        cout<<cur->data<<" ";
        cur=cur->left;
    }
    cur=s.top(); s.pop();
    cur=cur->right;

}
}

void IterativePreorder(node *root){
    if(root==NULL) return ;
    stack <node *> s;
    s.push(root);
    while(s.empty()==false){
         node *cur=s.top();
        cout<<cur->data<<" ";
        s.pop();
        if(cur->right!=NULL);
        s.push(cur->right);
        if(cur->left!=NULL);
        s.push(cur->left);
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

    // Mera khud banaya hua:

    // iterativePreorder(root);

   IterativePreorder(root);  
    return 0;
}