#include<iostream>
using namespace std;


// Linked list Implementation of stack:
struct node{
    int data;
    node *next;
    node(int d){
        data=d;
        next=NULL;
    }
};
struct mystack{
    node *head;
    int sz;
    mystack(){
        head=NULL;
        sz=0;
    }
    void push(int d){
        node*temp=new node(d);
        temp->next=head;
        head=temp;
        sz++;
    }
    int pop(){
        if(head==NULL){
            return INT16_MAX;
        }
        int res=head->data;
        node *temp=head;
        head=head->next;
        delete(temp);
        sz--;
        return res;
    }
    int peak(){
        if(head==NULL){
            return INT16_MAX;
        }
        return head->data;
    }
    bool empty(){
        return (head==NULL);
    }
    int size(){
        return sz;
    } 
};

int main(){

    mystack k;
    k.push(34);
    cout<<k.peak()<<endl;
    k.push(100);
    cout<<k.size()<<endl;
    k.push(256);
    k.push(10);
    k.push(11);
    cout<<k.peak()<<endl;
    cout<<k.size()<<endl;
    k.push(9);
    k.push(1);
    cout<<k.peak()<<endl;
    cout<<k.pop()<<endl;
    cout<<k.peak()<<endl;
    cout<<k.size()<<endl;
    cout<<k.pop()<<endl;
    cout<<k.peak()<<endl;
    cout<<k.pop()<<endl;
    cout<<k.peak()<<endl;
    cout<<k.size()<<endl;
    cout<<k.empty()<<endl;
    cout<<k.pop()<<endl;
    cout<<k.pop()<<endl;
    cout<<k.pop()<<endl;
    cout<<k.peak()<<endl;
    cout<<k.pop()<<endl;
    cout<<k.size()<<endl;

    
    return 0;
}