#include<iostream>
using namespace std;
struct node{
    int data;
    node* prev;
    node* next;
    node(int d){
        data=d;
        prev=next=NULL;
    }
};

node *InsertBegin(node* head,int x){
    node*temp=new node(x);
    if(head==NULL){
        return temp;
    }
    temp->next=head;
    head->prev=temp;
    return temp;
}
void printlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}


int main(){
    node *head=new node(10);
    node*temp1=new node(20);
    node*temp2=new node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;

    head=InsertBegin(head,50);
    head=InsertBegin(head,345);
    head=InsertBegin(head,321);
    printlist(head);

    return 0;
}