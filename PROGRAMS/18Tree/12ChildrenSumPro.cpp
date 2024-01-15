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

// Children Sum Property Following Tree:

bool childSumPro(node *root){
    if(root==NULL){
        return 1;
    }
    if(root->left==NULL&&root->left==NULL){
        return 1;
    }
    int sum=0;
    if(root->left!=NULL){
        sum+=root->left->key;
    }
    if(root->right!=NULL){
        sum+=root->right->key;
    }
    return (sum==root->key && childSumPro(root->left) && childSumPro(root->right));

}
 



int main(){

    node *root=new node(20);
    root->left=new node(8);
    root->right=new node(12);
    root->left->left=new node(3);
    root->left->right=new node(5);
    

    cout<<"children Sum Property Tree:"<<endl;
    cout<<childSumPro(root)<<endl;



    
    return 0;
}