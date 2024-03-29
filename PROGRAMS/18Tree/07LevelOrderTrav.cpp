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


// Naive Approach :
// Can be done by using  both GetHeight fun and printDistanceK fun!



// Efficient Approach :

void levelOrderTrav(node *root){
    if(root==NULL){
        return ;
    }
    queue<node *> q;
    q.push(root);
    while(!q.empty()){
        node *curr=q.front();
        q.pop();
        cout<<curr->key<<" ";

        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}







int main(){
    node *root=new node(100);
    root->left=new node(230);
    root->right=new node(390);
    root->right->left=new node(40);
    root->right->right=new node(20);

    levelOrderTrav(root);

    
    
    
    
    return 0;
}