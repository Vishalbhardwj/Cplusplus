#include<iostream>
#include<queue>
using namespace std;

struct node{
    int key;
    node *left,*right;

    node(int k){
        key=k;
        left=right=NULL;
    }
};



//  Iterative Approach For Size of Binary Tree: Here We use levelOrder with count variable.Tc:O(n),Spc:O(W).
int SizeOfBt(node *root){
    if(root==NULL){
        return 0;
    }
    queue<node *> q;
    q.push(root);
    int count=0;
    while(!q.empty()){
        
        node *curr=q.front();
        q.pop();
        
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
        count++;
    }
    return count;
}


// Recurrsive Aproach Tc:O(n) ,Spc:O(H).
int SizeOfBtRec(node *root){
    if(root==NULL){
        return 0;
    }
    return (SizeOfBtRec(root->left)+SizeOfBtRec(root->right))+1;
    
}







int main(){
    node *root=new node(100);
    root->left=new node(230);
    root->right=new node(390);
    root->right->left=new node(40);
    root->right->right=new node(20);

    cout<<"Iterative Approach:"<<endl;
    cout<<SizeOfBt(root)<<endl;
    cout<<"Recurrsive Approach:"<<endl;
    cout<<SizeOfBtRec(root)<<endl;

    
    
    
    
    return 0;
}