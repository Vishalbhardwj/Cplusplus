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




node *BTDLL(node *root){
    if(root==NULL){return root;}

    static node *prev = NULL;              // fetches changed value again and again.

    node *head=BTDLL(root->left);

    if(prev==NULL){ head=root; }
    else{
        root->left=prev;
        prev->right=root;

    }
    prev=root;

    BTDLL(root->right);

    return head;

}

void printList(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->key<<" ";
        curr=curr->right;
    }

}






int main(){
    node *root=new node(100);
    root->left=new node(230);
    root->right=new node(390);
    root->right->left=new node(40);
    root->right->right=new node(20);


    cout<<"Changing Tree to DLL : "<<endl;
    node *head=BTDLL(root);
    printList(head);


    

    

    
    
    
    
    return 0;
}