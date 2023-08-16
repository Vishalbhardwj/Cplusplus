#include<iostream>
using namespace std;

struct node{
    int data;
    node *left,*right;

    node(int d){
        data=d;
        left=right=NULL;
    }
};

bool SearchBst(node *root,int key){
    if(root==NULL) return 0;
    if(key==root->data) return 1;
    else if(key<root->data){
        SearchBst(root->left,key);
    }else{
        SearchBst(root->right,key);
    }
}


bool searchBst(node *root,int key){
    node *cur=root;
    while(cur!=NULL){
        if(cur->data==key){
            return 1;
        }else if(cur->data<key){
            cur=cur->right;
        }else{
            cur=cur->left;
        }
    }
    return 0;
}



int main(){

    node *root=new node(30);
    root->left=new node(10);
    root->right=new node(70);
    root->left->left=new node(4);
    root->left->right=new node(20);
    root->right->left=new node(60);
    
    cout<<SearchBst(root,20)<<endl;
    cout<<SearchBst(root,100)<<endl;
    cout<<SearchBst(root,70)<<endl;
    cout<<searchBst(root,17)<<endl;
    cout<<searchBst(root,10)<<endl;
    
    return 0;

}