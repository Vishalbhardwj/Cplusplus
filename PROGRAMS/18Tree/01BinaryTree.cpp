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

int main(){
    
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);
    
    
    return 0;
}
