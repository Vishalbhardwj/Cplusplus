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



node *insertPos(node *head,int pos ,int data){
    node* temp = new node(data);
    if(pos==1){
        temp->next=head;
        return temp;
    }
    node*cur=head;
    for(int i=0;i<(pos-2)&&cur!=NULL;i++){
        cur=cur->next;
    }
    if(cur==NULL){
        return head;
    }
    temp->next=cur->next;
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

int pos(node *head,int x){
    int pos=0;
    node *cur=head;
    while(cur!=NULL){
        pos++;
        if(x<cur->data){
            return pos;
        }
        cur=cur->next;
    }
    return (pos+1);
}

node *sortedInsert(node* head,int x){
    node *temp=new node(x);
    if(head==NULL) return temp;

    if(x<head->data){
        temp->next=head;
        return temp;
    }
    node *cur =head;
    while(cur->next!=NULL&&x>cur->next->data){
        cur=cur->next;
    }
    temp->next=cur->next;
    cur->next=temp;
    return head;
}



int main(){

     node *head=NULL;
    head=insertEnd(head,50);
    head=insertEnd(head,60);
    head=insertEnd(head,698);

//  This below one is also a solution to problem: 
//  But here we divide problem in two phase :
//  1:- finding the postion .
//  2:- Inserting at that postion.

    // int t;
    // cin>>t;
    // while(t--){

    // cout<<endl;
    // cout<<"Enter data:"<<endl;
    // int data;
    // cin>>data;
    // int post=pos(head,data);
    // head=insertPos(head,post,data);
    // PrintList(head);

    // }

    int t;
    cin>>t;
    while(t--){
    cout<<"Enter data:"<<endl;
    int data;
    cin>>data;
    head=sortedInsert(head,data);
     PrintList(head);
    }
    
   
    return 0;
}