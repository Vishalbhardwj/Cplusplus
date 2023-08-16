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

struct queue{
    node *front;
    node *rear;
    int size;

    
    queue(){
        front=NULL;
        rear=NULL;
        size=0;
    }

    void enque(int x){
       node *temp=new node(x);
       if(front==NULL){
       front=rear=temp;
       }
       rear->next=temp;
       rear=temp;
       size++;
    }

    void deque(){
        if(front==NULL){
            return ;
        }
        node* temp=front;
        front=front->next;
        if(front==NULL) rear=NULL;
        delete(temp);
        size--;
    }

    int Size(){
        return size;
    }

    int getFront(){
        return (front->data);
    }

    int getRear(){
        return (rear->data);
    }

    bool empty(){
        return (front==NULL);
    }

};


int main(){

     queue qs;
    cout<<qs.empty()<<endl;
    qs.enque(23);
    qs.enque(45);
    qs.enque(310);
    qs.enque(231);
    cout<<qs.getFront()<<endl;
    qs.deque();
    cout<<qs.getFront()<<endl;
    qs.deque();
    cout<<qs.getFront()<<endl;
    cout<<qs.getRear()<<endl;
    qs.deque();
    cout<<qs.getRear()<<endl;
    qs.enque(450);
    qs.enque(345);
    qs.enque(435);
    qs.enque(121);
    qs.enque(123);
    
  

    return 0;
}