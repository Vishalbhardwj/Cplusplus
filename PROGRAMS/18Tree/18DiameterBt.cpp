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

int diaBt(node * root){
    if(root==NULL){return 0;}
    int d1=height(root->left)+height(root->right)+1;

    int d2=diaBt(root->left);
    int d3=diaBt(root->right);

    return max(d1,max(d2,d3));
}






int res=0;
int DiaBt(node* root){
    if(root==NULL){return 0;}

    int hl=DiaBt(root->left);
    int hr=DiaBt(root->right);

    res=max(res,hl+hr+1);
    return max(hl,hr)+1;
}




int main(){
    node *root=new node(100);
    root->left=new node(230);
    root->right=new node(390);
    root->right->left=new node(40);
    root->right->right=new node(20);
    root->left->left=new node(1);
    root->left->right=new node(2);
    root->right->left->left=new node(177);
    root->right->left->right=new node(222);
    

    cout<<"Unoptimized version"<<endl;
    cout<<diaBt(root)<<endl;
    cout<<"Compare"<<endl;
    cout<<"Optimized version"<<endl;
    cout<<"Height of Tree : "<<DiaBt(root)<<endl;
    cout<<"Diameter of Tree : "<<res<<endl;


    
    return 0;
}

