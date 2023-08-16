#include<iostream>
#include<bits/stdc++.h>
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
void RevLinkedL(node *head){
    vector<int> v;     // auxiliary arr
    for(node *cur=head;cur!=NULL;cur=cur->next){
        v.push_back(cur->data);
    }
    for(node *cur=head;cur!=NULL;cur=cur->next){
        cur->data=v.back();
        v.pop_back();
    }
}

node *ReverLinkedL(node *head){
    node*cur=head;
    node*pre=NULL;
    while(cur!=NULL){
        node*next=cur->next;
        cur->next=pre;
        pre=cur;
        cur=next;
    }

    return pre;

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
    head=insertEnd(head,50);
    head=insertEnd(head,45);
    head=insertEnd(head,66);
    head=insertEnd(head,456);
    head=insertEnd(head,543);
    head=insertEnd(head,698);
    head=insertEnd(head,1);
    head=insertEnd(head,652);
    head=insertEnd(head,4599);

    // Reversing LinkedList: Iterative  : BY changing data;
    // RevLinkedL(head);

    // PrintList(head);

    // Reversing LinkedList: Iterative   : reversing linking;
    head=ReverLinkedL(head);

    PrintList(head);




    
    return 0;
}