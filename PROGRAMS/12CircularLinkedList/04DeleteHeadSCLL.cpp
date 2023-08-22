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

void PrintList(node *head){
    if(head==NULL) cout<<"NULL"<<" ";
    node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}
node *deleteHead(node *head){
    if(head==NULL) return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    node*cur=head;
    while(cur->next!=head){
        cur=cur->next;
    }
    cur->next=head->next;
    delete head;
    return (cur->next);
}

node *DeleteHead(node *head){
    if(head==NULL) return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data=head->next->data;
    node *temp=head->next;
    head->next=head->next->next;
    delete (temp);
    return head;  
}

int main(){
    node *head=NULL;
    head=InsertEnd(head,567);
    head=InsertEnd(head,45);
    head=InsertEnd(head,67);
    head=InsertEnd(head,32);
    PrintList(head);
    cout<<endl;

    // Naive Approach:
    head=deleteHead(head);
    PrintList(head);
    cout<<endl;

    // Optimized approach:
    head=DeleteHead(head);
    PrintList(head);



    return 0;
}