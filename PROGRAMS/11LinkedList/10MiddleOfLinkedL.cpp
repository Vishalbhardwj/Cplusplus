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
void middleNode(node* head){
    if(head==NULL){
        cout<<"NULL";
    }
    int count=0;
    node*cur;
    for(cur=head;cur!=NULL;cur=cur->next){
        count++;
    }
    cur=head;
    for(int i=0;i<(count/2);i++){
        cur=cur->next;
    }
    cout<<cur->data<<endl;

}
void OmiddleNode(node*head){
    if(head==NULL){
        cout<<"NULL"<<endl;
    }
    node *slow=head,*fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data<<endl;
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
    head=insertEnd(head,4599);

    // Naive approach:
    middleNode(head); // Requiring two traversal of linked list;

    //Optimized approach:
    OmiddleNode(head);  // Requiring One traversal of linked list;
    return 0;
}