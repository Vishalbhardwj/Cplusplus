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

void Print(node *head){
    node *cur=head;
    while(cur!=NULL){
        cout<<cur->data<<"-->";
        cur=cur->next;
    }
}

int main(){

    {  
        // Long implemenation:

    node *head = new node(10.0);
    node *temp1 = new node(12.3);
    node *temp2 = new node (89.0);
    head->next = temp1;
    temp1->next = temp2;

    cout<<head->data<<"-->"<<temp1->data<<"-->"<<temp2->data<<endl;

    }

    cout<<endl;

    { 
        // Short implemenation:

        node *head=new node(56.7);
        head->next=new node(90.9);
        head->next->next=new node(100.4);
        head->next->next->next=new node(1295.7);

        Print(head);


       
        


    }

    return 0;
}