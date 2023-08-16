#include<iostream>
using namespace std;
struct node{
    int data;
    node* prev;
    node *next;
    node(int d){
        data=d;
        prev=next=NULL;
    }
};

void printlist(node *head){ // print function for circular doubly linked list is also diff:
    if(head==NULL)return;
    node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}
node *InsertHead(node *head,int x){ 
    node *temp=new node(x);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    head->prev->next=temp;
    temp->next=head;
    head->prev=temp;
    temp->prev=head;
    return temp;
}

int main(){
    node *head=new node(10);
    node* temp1=new node(20);
    node *temp2=new node(30);
    head->prev=temp2;
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=head;
    head=InsertHead(head,100);
    
    printlist(head);

}