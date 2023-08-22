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

node *delTail(node *head){
    if(head==NULL) return NULL;
    if(head->next==NULL) return NULL;

    node *cur=head;
    while(cur->next->next!=NULL){
        cur=cur->next;
    }
    delete (cur->next);
    cur->next=NULL;
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

    // Deleting tail of linked list:
    node *head=NULL;
    head=insertEnd(head,50);
    head=insertEnd(head,60);
    head=insertEnd(head,698);

    head=delTail(head);



    PrintList(head);

    




    return 0;
}