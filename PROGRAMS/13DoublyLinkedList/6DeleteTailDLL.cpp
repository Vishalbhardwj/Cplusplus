#include<iostream>
using namespace std;
struct node{
    int data;
    node *prev;
    node *next;
    node(int d){
        data=d;
        prev=next=NULL;
    }
};
node *InsertEnd(node *head,int x){
    node *temp=new node(x);
    if(head==NULL){
        return temp;
    }
    node *cur=head;
    while(cur->next!=NULL){
        cur=cur->next;
    }
    cur->next=temp;
    temp->prev=cur;
    return head;
}

void printlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

node *deleteTail(node *head){
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node *cur =head;
    while(cur->next->next!=NULL){
        cur=cur->next;
    }
    delete (cur->next);
    cur->next=NULL;
    return head;
    
}

int main(){
      node *head=NULL;
    head=InsertEnd(head,34);
    head=InsertEnd(head,21);
    head=InsertEnd(head,120);
    printlist(head);
    head=deleteTail(head);
    cout<<endl;
    printlist(head);
    return 0;
}