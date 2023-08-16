#include<iostream>
#include<queue>
#include<stack>
using namespace std;

struct node{
    int data;
    node *left,*right;

    node(int d){
        data=d;
        left=right=NULL;
    }
};

// Recursive method : Consisting less line's :

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


//  Recusive method : But made by me :Consisting to many line :

node *Insertion(node *root,node *cur,int x){
    node *temp=new node(x);
    if(root==NULL) return temp;
    else
    {
    if(cur->left==NULL){
           cur->left=temp;
           return root;
        
    }
    else if(cur->right==NULL){
        cur->right=temp;
        return root;
    }
    else if(x==cur->data) return root;

    else if(x<cur->data)
    {
        Insertion(root,cur->left,x);
    }else
    {
        Insertion(root,cur->right,x);
    }

    }
}
node *insertion(node *root,int x){
    node *temp=new node(x);
    if(root==NULL){
        return temp;
    }
    node *cur=root;
    while(cur->left!=NULL&&cur->right!=NULL){
        if(cur->data==x){
            return root;

        }else if(cur->data>x){
            cur=cur->left;
        }else{
            cur=cur->right;
        }
    }
    if(cur->left==NULL){
           cur->left=temp;
           return root;
        
    }
     else if(cur->right==NULL){
        cur->right=temp;
        return root;
    }
    
}




void iterativeInorder(node *root){
    stack <node *> s;
    node *cur=root;
    while(cur!=NULL||!s.empty()){
        while(cur!=NULL){
            s.push(cur);
            cur=cur->left;
        }
        cur=s.top(); s.pop();
        cout<<cur->data<<" ";
        cur=cur->right;
    }
    
}
bool SearchBst(node *root,int key){
    if(root==NULL) return 0;
    if(key==root->data) return 1;
    else if(key<root->data){
        SearchBst(root->left,key);
    }else{
        SearchBst(root->right,key);
    }
}





int main(){

    // node *root=new node(30);
    // root->left=new node(10);
    // root->right=new node(70);
    // root->left->left=new node(4);
    // root->left->right=new node(20);
    // root->right->left=new node(60);
    node *root=NULL;

    // int t;
    // cin>>t;
    // while(t--){
    // int d;
    // cin>>d;
    // root=Insertion(root,root,d);
    // cout<<endl;
    //  iterativeInorder(root);
    //  cout<<endl;
    // }


   
    
    // root=Insertion(root,root,10);
    //  root=Insertion(root,root,70);
    //   root=Insertion(root,root,20);
//     int t;
//     cin>>t;
//     while(t--){
//         int d;
//         cin>>d;
//         root=insertion(root,d);
//         cout<<endl;
//    iterativeInorder(root);
//    cout<<endl;

//     }



    //Recursive code :With less line's 
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        root=Insert(root,d);
        cout<<endl;
        iterativeInorder(root);
        cout<<endl;
    }
   
   
 

    
    return 0;

}