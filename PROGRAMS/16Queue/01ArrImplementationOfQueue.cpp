#include<iostream>
using namespace std;

// Naive approach:

struct myqueue{
    int *arr;
    int size;
    int cap;

    myqueue(int c){
        size = 0;
        cap=c;
        arr=new int[cap];
    }

   

    void deque(){
        if(empty()==1){
            return ;
        }
        for(int i=1;i<=size-1;i++){
            arr[i-1]=arr[i];
        }
        size--;
    }

    void enque(int x){
        if(isfull()==1){
            return ;
        }
        arr[size]=x;
        size++;
    }

    int getFront(){
        if(empty()==1){
            return -1 ;
        }else{
            return arr[0];
        }
    }

    int getRear(){
        if(empty()==1){
            return -1;
        }else{
            return arr[size-1]; 
        }
    }

    bool empty(){
           return (size==0);
       }

       bool isfull(){
           return (size==cap);
       }
};

struct queue{

    int *ar;
    int front,cap,size;

    queue(int c){
        cap=c;
        size=0;
        front=0;
       ar=new int[cap];
    }
    bool empty(){
        return (size==0);
    }
    bool isfull(){
        return (size==cap);
    }

    int getRear(){
        if(empty()){
            return -1;
        }
        return ar[(front+size-1)%cap];
    }
    int getFront(){
        if(empty()){
            return -1;
        }
        return ar[front];
    }

    void enque(int x){
        if(isfull()){
            return ;
        }
        int rear=(front+size-1)%cap;
        rear=(rear+1)%cap;
        ar[rear]=x;
        size++;
    }
    void deque(){
        if(empty()){
            return ;
        }
        front=(front+1)%cap;
        size--;
    }
};

int main(){

    myqueue q(6);
    cout<<q.empty()<<endl;
    q.enque(23);
    q.enque(45);
    q.enque(310);
    q.enque(231);
    cout<<q.getFront()<<endl;
    q.deque();
    cout<<q.getFront()<<endl;
    q.deque();
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    q.deque();
    cout<<q.getRear()<<endl;
    q.enque(450);
    q.enque(345);
    q.enque(435);
    q.enque(121);
    q.enque(123);
    cout<<q.isfull()<<endl;


    queue qs(6);
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
    
    cout<<q.isfull()<<endl;



    return 0;
}

