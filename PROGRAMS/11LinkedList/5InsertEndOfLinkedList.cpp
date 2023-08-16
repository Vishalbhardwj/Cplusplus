#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};

node *insertEnd(node* head,int x){
    node *temp=new node(x);

    if(head==NULL) return temp;

    node* cur=head;
    while(cur->next!=NULL){
        cur=cur->next;
    }
    cur->next=temp;

    return head;
}

void PrintList(node * head){
    node *cur=head;
    while(cur!=NULL){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
}

int main(){
    node *head=NULL;
    head=insertEnd(head,30);
    head=insertEnd(head,589);
    head=insertEnd(head,120);
    head=insertEnd(head,341);

    PrintList(head);

    
    
    return 0;
}