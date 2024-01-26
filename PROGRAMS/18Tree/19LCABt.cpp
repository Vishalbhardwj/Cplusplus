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


bool findpath(node *root,vector<node *> &p,int n){
    if(root==NULL){
        return false;
    }
    p.push_back(root);
    if(root->key==n){ return true; }
    if(findpath(root->left,p,n)||findpath(root->right,p,n)){
        return true;
    }
    p.pop_back();
    return false;

}

node * lcaBt(node *root,int n1,int n2){
    vector<node *> path1,path2;

    if(findpath(root,path1,n1)==false||findpath(root,path2,n2)==false){
        return NULL;
    }
    for(int i=1;i<path1.size()&&i<path2.size();i++){
        if(path1[i]!=path2[i]){
            return path1[i-1];
        }
    }
    return NULL;
    
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


    int t;
    cin>>t;
    while(t--){
        int n1,n2;
        cin>>n1>>n2;
    node *temp=lcaBt(root,n1,n2);
    cout<<temp->key<<endl;

    }
   

   


    
    return 0;
}

