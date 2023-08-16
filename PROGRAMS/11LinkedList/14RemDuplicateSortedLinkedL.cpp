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

void remDupSorL(node* head){
   
    node *cur=head;
    while(cur->next!=NULL){
        if(cur->data==cur->next->data){         // Or these three line  in if can be : 
            node*Next=cur->next->next;         // node *temp =cur->next;                                                                             
             delete (cur->next);                //cur->next=cur->next->next;            
            cur->next=Next;                      // delete temp;
           
        }else{
            cur=cur->next;
        }
    }
    
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
    head=insertEnd(head,652);
    head=insertEnd(head,652);
    head=insertEnd(head,652);
    head=insertEnd(head,652);
    head=insertEnd(head,652);
    head=insertEnd(head,652);
    head=insertEnd(head,4512);
    head=insertEnd(head,4512);
    head=insertEnd(head,4512);
    head=insertEnd(head,4512);    



    remDupSorL(head);

    PrintList(head);

    return 0;
}