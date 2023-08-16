#include<iostream>
#include<stack>
using namespace std;

struct node{
    int data;
    node *right,*left;

    node(int d){
        data=d;
        right=left=NULL;
    }

};

node *getSuccessor(node *root){
    node *temp=root->right;
    while(temp!=NULL && temp->left!=NULL){
        temp=temp->left;
    }
    return temp;

}

node *delNode(node *root,int x){

    if(root==NULL) return root;
    else if(root->data<x){
        root->right=delNode(root->right,x);
    }else if(root->data>x){
        root->left=delNode(root->left,x);
    }
    else if(root->left==NULL){
        node *temp=root->right;
        delete root;
        return temp;
    }
    else if(root->right==NULL){
        node *temp=root->left;
        delete root;
        return temp;
    }
    else{
        node *succ=getSuccessor(root);
        root->data=succ->data;
        root->right=delNode(root->right,succ->data);

    }
    return root;


}
node *Insert(node * root,int x){
    if(root==NULL) return new node(x);
    else if(root->data<x){ 
        root->right=Insert(root->right,x);
    }
    else if(root->data>x){
        root->left=Insert(root->left,x);
    }
    return root;
}


void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main(){
    node *root=NULL;
    cout<<"Enter no of testcase:"<<endl;
    int t;
    cin>>t;
    while(t--){
        cout<<endl;
        cout<<"Enter data:"<<endl;
        int d;
        cin>>d;
        root=Insert(root,d);
      
    }
    cout<<"Before Deletion of node:"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"After Deletion of node:"<<endl;
    root=delNode(root,5);
    inorder(root);
    

    


   



    return 0; 
}