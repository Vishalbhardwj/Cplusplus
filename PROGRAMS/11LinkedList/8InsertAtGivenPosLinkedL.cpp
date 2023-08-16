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



int main(){

    node *head=NULL;
    head=insertEnd(head,50);
    head=insertEnd(head,60);
    head=insertEnd(head,698);

   cout<<"Enter no of test Cases:"<<endl;
    int t;
    cin>>t;
    while(t--){
     cout<<"Enter pos:"<<endl;
     int pos;
    cin>>pos;
    head=insertPos(head,pos,8000);
    PrintList(head);
    }
   
    return 0;
}