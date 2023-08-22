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

// basic approach :
void printList(node *head){

    if(head==NULL) cout<<"NULL"<<endl;
    cout<<head->data<<" ";

    for(node *p=head->next;p!=head;p=p->next){
     cout<<p->data<<" "; 
    }
}

// Text book approach:
void PrintList(node *head){
    if(head==NULL) cout<<"NULL"<<" ";
    node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

int main(){
    node *head=new node(10);
    head->next=new node(400);
    head->next->next=new node(350);
    head->next->next->next=head;
    printList(head);
    cout<<endl;
    PrintList(head);
    
    
    
    return 0;
}