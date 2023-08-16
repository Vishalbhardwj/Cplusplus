#include<iostream>
using namespace std;



// Array Implemenation of stack:
struct mystack{
    int *arr;
    int cap;
    int top;
    mystack(int x){
        cap=x;
        arr=new int[x];
        top=-1;
    }
    void push(int x){
        top++;
        arr[top]=x;
     
    }
    int pop(){
      int res=arr[top];
      top--;
       return res;

    }
    int size(){
        return top+1;
    }
    int peek(){
        return arr[top];
    }
    bool empty(){
        return (top==-1);
    }
 
};


int main(){
    
    // Array Implementation of stack:
    mystack s(10);
    s.push(23);
    s.push(14); 
    s.push(123);
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.empty()<<endl;


    return 0;
}