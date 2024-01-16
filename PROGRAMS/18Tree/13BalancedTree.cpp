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


int height(node *root){
    if(root==NULL){
        return 0;
    }
        return max(height(root->left),height(root->right))+1;  
}

bool balancedTree(node *root){
    if(root==NULL){
        return 1;
    }
    int hl=height(root->left);
    int hr=height(root->right);

    return abs(hl-hr)<=1 && balancedTree(root->left) && balancedTree(root->right);

}

int isbalancedTree(node *root){
    if(root==NULL){return 0;}

    int hl=isbalancedTree(root->left);
    if(hl==-1) return -1;

    int hr=isbalancedTree(root->right);
    if(hr==-1) return -1;

    if(abs(hl-hr)>1)return -1;
    return max(hl,hr)+1;

}






int main(){

    node *root=new node(20);
    root->left=new node(8);
    root->right=new node(12);
    root->left->left=new node(3);
    root->left->right=new node(5);
    root->left->left->left=new node(122);

    cout<<"T.C: is n square Solution:"<<endl;
    cout<<balancedTree(root)<<endl;
    cout<<"T.C: is square Solution:"<<endl;
    cout<<isbalancedTree(root)<<endl;




    

  



    
    return 0;
}