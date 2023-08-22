#include<iostream>
using namespace std;
struct node {
    int data;
    node *right,*left;
    
    node(int d){
        data=d;
        right=left=NULL;
    }
};

// Iterative code is best :- O(h):timecomplexity & O(1) space complexity:

node *Ceil(node *root,int x){
node *res=NULL;
while(root!=NULL){
    if(root->data==x){
        return root;
    }else if(root->data>x){
        res=root;
        root=root->left;
    }else{
        root=root->right;
    }
}
return res;
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

int main(){
    //Insertion of node's:
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
    
    {   // New Scope:
    cout<<endl;
    cout<<"Enter Testcase :how many time you want to compute floor"<<endl;
    int t;
    cin>>t;

    while(t--){
        cout<<"Enter floor of :"<<endl;
        int d;
        cin>>d;
        node *Ce=Ceil(root,d);
        cout<<Ce->data<<endl;
    }

    }

    
    return 0;
}