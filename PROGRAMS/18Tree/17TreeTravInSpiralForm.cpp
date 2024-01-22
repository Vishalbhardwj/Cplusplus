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


void spiralTrav(node *root){
    if(root==NULL){return ;}

    queue<node *>q;
    stack<int> s;
    bool reverse=false;
    q.push(root);
    while(!q.empty()){
        int count=q.size();
        for(int i=0;i<count;i++){
            node *curr =q.front();
            q.pop();
            if(reverse){
                s.push(curr->key);
            }else{
                cout<<curr->key<<" ";
            }
            if(curr->left!=NULL){q.push(curr->left);}
            if(curr->right!=NULL){q.push(curr->right);}
        }
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
        reverse=!reverse;
        cout<<endl;
    }
    
}

void spiralTrav2(node *root){
    if(root==NULL){return ;}

    stack<node *> s1,s2;
    s1.push(root);

    while(!s1.empty()||!s2.empty()){
        while(!s1.empty()){
            node *curr=s1.top();
            s1.pop();
            cout<<curr->key<<" ";
            if(curr->left!=NULL){s2.push(curr->left);}
            if(curr->right!=NULL){s2.push(curr->right);}

        }
        cout<<endl;
        while(!s2.empty()){
            node *curr=s2.top();
            s2.pop();
            cout<<curr->key<<" ";
            if(curr->right!=NULL){s1.push(curr->right);}
            if(curr->left!=NULL){s1.push(curr->left);}


        }
        cout<<endl;
    }

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



    cout<<"Printing Tree in Sprial Fashion: Method 1 : T.C=O(n)."<<endl;
    spiralTrav(root);

    cout<<"Printing Tree in Sprial Fashion: Method 2 : T.C=O(n)."<<endl;
    spiralTrav2(root);
    




  


    

    

    
    
    
    
    return 0;
}