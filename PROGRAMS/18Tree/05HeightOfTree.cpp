#include<iostream>
using namespace std;

struct node{
    int key;
    node *left,*right;

    node(int k){
        key=k;
        left=right=NULL;
    }
};

int height(node *root){
    if(root==NULL){
        return 0;
    }
        return max(height(root->left),height(root->right))+1;  
}




int main(){
    node *root=new node(10);
    root->left=new node(8);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->left->left=new node(100);
    root->right->right=new node(50);


    cout<<height(root)<<endl;

   
    
    
    
    return 0;
}