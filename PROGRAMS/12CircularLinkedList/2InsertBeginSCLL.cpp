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
node *insertB(node* head,int x){
    node *temp=new node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    node *cur=head;
    while(cur->next!=head)
        cur=cur->next;
    cur->next=temp;
    temp->next=head;
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
node  *InsertB(node *head,int x){
    node *temp=new node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
  
    temp->next=head->next;
    head->next=temp;
    swap(head->data,head->next->data);
    return head;
}

int main(){
    node *head=new node(10);
    head->next=new node(400);
    head->next->next=new node(350);
    head->next->next->next=head;

    // Navie approach : O(n) time complexity :

    // cout<<"Enter testCase's:"<<endl;
    // int t;
    // cin>>t;

    // while(t--){
    // cout<<"Enter E to be inserted:"<<endl;
    // int x;
    // cin>>x;
    // head=insertB(head,x);
    // PrintList(head);
    // cout<<endl;
    // }

    // Efficient Approach :O(1) time complexity :

    cout<<"Enter testCase's:"<<endl;
    int t;
    cin>>t;
    while(t--){
        cout<<"Enter E to be Inserted:"<<endl;
        int x;
        cin>>x;
        head=InsertB(head,x);
        PrintList(head);
        cout<<endl;
    }
   
    
    return 0;
}