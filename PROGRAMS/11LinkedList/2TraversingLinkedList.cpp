#include<iostream>
using namespace std;

struct node{
    float data;
    node *next;
    node(float x){
        data=x;
        next=NULL;
    }
};


    //Iterative Traversal:

void Print(node *head){
    node *cur=head;
    while(cur!=NULL){
        cout<<cur->data<<"   ";
        cur=cur->next;
    }
}

    //Recursive Traversal:
    
void print (node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<"  ";
    print(head->next);
}

int main(){

    
    node *head=new node(56.7);
        head->next=new node(90.9);
        head->next->next=new node(100.4);
        head->next->next->next=new node(1295.7);

        Print(head);
        print(head);
    return 0;
}