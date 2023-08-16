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

node *deleteKth(node *head,int k){
    if(head==NULL){
        return NULL;
    }
    if(k==1){
        return DeleteHead(head);
    }
    node*cur=head;
    for(int i=1;i<(k-1);i++){
        cur=cur->next;
    }
    node *temp=cur->next;
    cur->next=cur->next->next;
    delete temp;
    return head;
}


int main(){

    node *head=NULL;
    head=InsertEnd(head,567);
    head=InsertEnd(head,45);
    head=InsertEnd(head,67);
    head=InsertEnd(head,32);
    head=InsertEnd(head,456);
    head=InsertEnd(head,213);
    head=InsertEnd(head,542);
    head=InsertEnd(head,123);
    head=InsertEnd(head,1);
    PrintList(head);
    cout<<endl;

    cout<<"Enter TestCase:"<<endl;
    int t;
    cin>>t;
    while(t--){
    cout<<"Enter node to be Deleted:"<<endl;
    int k;
    cin>>k;
    deleteKth(head,k);
    PrintList(head);
    cout<<endl;
    }

    return 0;
}