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

 void printKDis(node *root ,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->key<<" ";
    }else{
        printKDis(root->left,k-1);
        printKDis(root->right,k-1);
    }
 }



int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);

    
    printKDis(root,2);
    
    
    
    return 0;
}