#include<iostream>
using namespace std;


// Naive Approach:
// struct dequeue{
//     int *arr;
//     int size,cap;
//     dequeue(int c){
//         size=0;
//         cap=c;
//         arr=new int[cap];
//     }


//     bool isfull(){
//         return (size==cap);
//     }

//     bool empty(){
//         return (size==0);
//     }


//     void insertFront(int x){
//         if(isfull()){
//             return ;
//         }
//         for(int i=size-1;i>=0;i--){
//             arr[i+1]=arr[i];
//         }
//         arr[0]=x;
//         cout<<x<<": is Insert at Front"<<endl;
//         size++;
//     }
//     void insertRear(int x){
//         if(isfull()){
//             return ;
//         }
//         arr[size]=x;
//         cout<<x<<": is Insert at Rear"<<endl;
//         size++;
//     }

//     void deleteFront(){
//         if(empty()){
//             return ;
//         }
//         for(int i=1;i<size-1;i++){
//             arr[i-1]=arr[i];
//         }
//         size--;
//     } 
     
//     void deleteRear(){
//         if(empty()) return ;
//         size--;
//     }

//     int getFront(){
//         if(empty()) return -1;
//         else{
           
//             return arr[0];
//         }
//     }

//     int getRear(){
//         if(empty()) return -1;
//         else{
//             return arr[size-1];
//         }
//     }
// };

// Efficient(Best) Approach :-
struct dequeue2{
    int *arr;
    int cap,size;
    int front;
    dequeue2(int c){
        arr=new int[c];
        cap=c;
        size=0;
        front=0;
    }

    bool isFull(){
       
        return (cap==size);
    }

    bool isEmpty(){
    
        return (size==0);
    }

    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return front;
    }

    int getRear(){
        if(isEmpty()){
            return -1;
        }
        return (front+size-1)%cap;
    }

    void deleteFront(){
        if(isEmpty()){return;}
        
        front=(front+1)%cap;
        size--;
    }

    void insertRear(int x){
        if(isFull()){
            return;
        }
        
        int newRear=(getRear()+1)%cap;
        arr[newRear]=x;
        size++;

    }

    void insertFront(int x){
        if(isFull()){
            return;
        }
        
        front=(front-1+cap)%cap;
        arr[front]=x;
        size++;

    }

    void deleteRear(){
        if(isEmpty()){
            return;
        }
       
        size--;
    }
    void traverse(){
        for(int i=0;i<cap;i++){
            cout<<arr[i]<<" ";
        }
    }

    
};


int main(){

    dequeue2 q(4);
    q.insertFront(10);
    cout<<q.getFront()<<" "<<q.getRear()<<endl;
    q.insertRear(20);
    cout<<q.getFront()<<" "<<q.getRear()<<endl;
    q.insertFront(30);
    cout<<q.getFront()<<" "<<q.getRear()<<endl;
    q.insertRear(50);
    cout<<q.getFront()<<" "<<q.getRear()<<endl;
    q.deleteFront();
    cout<<q.getFront()<<" "<<q.getRear()<<endl;
    q.deleteRear();
    cout<<q.getFront()<<" "<<q.getRear()<<endl;
    q.traverse();
    

  
    
   



    




    return 0;
}