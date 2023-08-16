#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

node *insertEnd(node *head,int x){
    node* temp=new node(x);
    if(head==NULL){
        return temp;
    }
    node* cur=head;
    while(cur->next!=NULL){
        cur=cur->next;
    }
    cur->next=temp;
    
    return head;

}

void nthNode(node*head,int n){
    if(head==NULL) return ;
    node* first=head;
    for(int i=0;i<n;i++){
        if(first==NULL) return ;
        first=first->next;
    }
    node* second=head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    cout<<second->data<<endl;
}

void nthNodeL(node *head,int n){
    if(head==NULL) return ;
    int len=0;
    for(node* cur=head;cur!=NULL;cur=cur->next){
        len++;
    }
    if(n>len) return ;
    node* cur=head;
    for(int i=1;i<len-n+1;i++){
        cur=cur->next;
    }
    cout<<cur->data<<endl;

}


int main(){
     node *head=NULL;
    head=insertEnd(head,50);
    head=insertEnd(head,45);
    head=insertEnd(head,66);
    head=insertEnd(head,456);
    head=insertEnd(head,543);
    head=insertEnd(head,698);
    head=insertEnd(head,1);
    head=insertEnd(head,4599);
    
    

    // two-pointer approach:
    // int t;
    // cin>>t;
    // while(t--){
    // cout<<endl;
    // cout<<"Enter Postion:"<<endl;
    // int n;
    // cin>>n;
    // nthNode(head,n);
    // }

    // Using length of linked list:
    cout<<"Enter no of test-case:"<<endl;
    int t;
    cin>>t;
    while(t--){
    cout<<endl;
    cout<<"Enter nth place:"<<endl;
    int n;
    cin>>n;
    nthNodeL(head,n);
    }
    

    



    return 0;
}