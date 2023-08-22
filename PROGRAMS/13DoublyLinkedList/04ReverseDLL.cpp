#include<iostream>
#include<bits/stdc++.h>
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
node *reverse(node *head){
    if(head==NULL||head->next==NULL){return head;}
    node *cur=head;
    while(cur->next!=NULL){
        swap(cur->next,cur->prev);
        cur=cur->prev;
    }
    swap(cur->next,cur->prev);
    return cur;
}

int main(){
    node *head=NULL;
    head=InsertEnd(head,34);
    head=InsertEnd(head,21);
    head=InsertEnd(head,120);
    cout<<"Before Reversing:"<<endl;
    printlist(head);
    cout<<endl;
    cout<<"After Reversing:"<<endl;
    head=reverse(head);
    printlist(head);





    return 0;
}