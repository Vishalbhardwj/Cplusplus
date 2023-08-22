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

node *insertBegin(node *head,int x){
    node *temp=new node(x);
    temp->next=head;
    return temp;
}

void PrintList(node *head){
    node* cur=head;
    while(cur!=NULL){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
}


int main(){

    // Creating Linked List:
    node *head=NULL;
    head=insertBegin(head,90);
    head=insertBegin(head,30);
    head=insertBegin(head,2030);
    head=insertBegin(head,78);
    head=insertBegin(head,56);
    PrintList(head);


    // Don't appy below one : 
    // node*head=new node(45);
    // head->next=new node(67);
    // head->next->next=new node(56);
    // head=insertBegin(head,456);
    // head=insertBegin(head,512);
    // PrintList(head);

    return 0;
}