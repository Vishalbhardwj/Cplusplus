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



int getMaxInBt(node *root){
    if(root==NULL){
        return INT16_MIN;
    }
    queue<node *> q;
    q.push(root);
    int max=root->key;
    while(!q.empty()){
        node *curr=q.front();
        q.pop();
        if(max<curr->key){max=curr->key;}

        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
    return max;
}


int getMaxInBtR(node *root){
    if(root==NULL){
        return INT16_MIN;
    }
    return max(root->key,max(getMaxInBtR(root->left),getMaxInBtR(root->right)));
}







int main(){
    node *root=new node(199900);
    root->left=new node(230);
    root->right=new node(390);
    root->right->left=new node(400);
    root->right->right=new node(13000);
   

    cout<<"Iterative Approach:"<<endl;
    cout<<getMaxInBt(root)<<endl;
    cout<<"Recursive Approach:"<<endl;
    cout<<getMaxInBtR(root)<<endl;

    
    
    
    
    return 0;
}