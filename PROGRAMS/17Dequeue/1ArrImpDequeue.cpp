#include<iostream>
using namespace std;


// Naive Approach:
struct dequeue{
    int *arr;
    int size,cap;
    dequeue(int c){
        size=0;
        cap=c;
        arr=new int[cap];
    }


    bool isfull(){
        return (size==cap);
    }

    bool empty(){
        return (size==0);
    }


    void insertFront(int x){
        if(isfull()){
            return ;
        }
        for(int i=size-1;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=x;
        cout<<x<<": is Insert at Front"<<endl;
        size++;
    }
    void insertRear(int x){
        if(isfull()){
            return ;
        }
        arr[size]=x;
        cout<<x<<": is Insert at Rear"<<endl;
        size++;
    }

    void deleteFront(){
        if(empty()){
            return ;
        }
        for(int i=1;i<size-1;i++){
            arr[i-1]=arr[i];
        }
        size--;
    } 
     
    void deleteRear(){
        if(empty()) return ;
        size--;
    }

    int getFront(){
        if(empty()) return -1;
        else{
           
            return arr[0];
        }
    }

    int getRear(){
        if(empty()) return -1;
        else{
            return arr[size-1];
        }
    }
};


// Efficient Approach:

struct mydequeue{
    int *arr;
    int front,cap,size;

    mydequeue(int c){
        cap=c;
        size=0;
        front=0;
        arr=new int[cap];
    }

    bool empty(){
        return (size==0);
    }

    bool isFull(){
        return (size==cap);
    }

    int getRear(){
        if(empty()) return -1;

        cout<<arr[(front+size-1)%cap]<<endl;
        
        return (front+size-1)%cap;

    }

    int getFront(){
        if(empty()) return -1;
    cout<<arr[front]<<endl;
        return front;
    }

    void insertFront(int x){
        if(isFull()) return ;
        front=(front-1+cap)%cap;
        arr[front]=x;
        size++;
    }

    void insertRear(int x){
        if(isFull()) return ;
        int new_rear=(getRear()+1)%cap;
        arr[new_rear]=x;
        size++;
    }

    void deleteFront(){
        if(empty()) return ;
        front=(front+1)%cap;
        size--;
    }

    void deleteRear(){
        if(empty()) return ;
        size--;
    }
};

int main(){

    dequeue dq(4);
    cout<<dq.getFront()<<endl;
    dq.insertFront(10);
    cout<<dq.getFront()<<endl;
    dq.insertRear(20);
    cout<<dq.getRear()<<endl;
    dq.insertFront(30);
    cout<<dq.getFront()<<endl;
    dq.insertRear(50);
    cout<<dq.getRear()<<endl;
    dq.deleteFront();
    cout<<dq.getFront()<<endl;
    dq.deleteRear();
    cout<<dq.getRear()<<endl;
    cout<<endl<<endl<<endl;

    mydequeue dqm(4);
    cout<<dqm.getFront()<<endl;
    dqm.insertFront(10);
    cout<<dqm.getFront()<<endl;
    dqm.insertRear(20);
    cout<<dqm.getRear()<<endl;
    dqm.insertFront(30);
    cout<<dqm.getFront()<<endl;
    dqm.insertRear(50);
    cout<<dqm.getRear()<<endl;
    dqm.deleteFront();
    cout<<dqm.getFront()<<endl;
    dqm.deleteRear();
    cout<<dqm.getRear()<<endl;
    




    return 0;
}