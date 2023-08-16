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

void PrintList(node *head){
    if(head==NULL) cout<<"NULL"<<" ";
    node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}


node *insertEnd(node *head,int x){
    node *temp=new node(x);
    if(head==NULL){
    temp->next=temp;
    return temp;
    }
    node *cur=head;
    while(cur->next!=head){
        cur=cur->next;
    }
    cur->next=temp;
    temp->next=head;
    return head;
}

node *InsertEnd(node*head,int x){
    node *temp =new node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    temp->next=head->next;
    head->next=temp;
    swap(head->data,head->next->data);
    return temp;
}



int main(){

    node *head=new node(10);
    head->next=new node(400);
    head->next->next=new node(350);
    head->next->next->next=head;

    // Naive apporach: O(n);
    
    // head=insertEnd(head,56);
    // PrintList(head);

    // Optimized Approach: O(1):
    head=InsertEnd(head,780);
    PrintList(head);



    return 0;
}
