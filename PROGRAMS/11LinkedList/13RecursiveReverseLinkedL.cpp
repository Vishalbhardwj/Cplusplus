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
void PrintList(node * head){
    node *cur=head;
    while(cur!=NULL){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
}

node *recRevL(node *cur,node *pre){
    if(cur==NULL){
        return pre;
    }
    node *next=cur->next;
    cur->next=pre;
    recRevL(next,cur);
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
    head=insertEnd(head,652);
    head=insertEnd(head,4599);
    head=insertEnd(head,4512);


    // Recursively reverse Linked List:
    head=recRevL(head,NULL);

    // Printing Linked List:
    PrintList(head);





    return 0;
}