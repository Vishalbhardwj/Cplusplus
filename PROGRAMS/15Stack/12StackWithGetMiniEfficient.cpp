#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct mystack{
    stack<int> s;
    int min;
    void push(int x){
        if(s.empty()){
            min=x;
            s.push(x);
        }
        else if(x<=min){
            s.push(x-min);
            min=x;
        }else{
            s.push(x);
        }
    }

    int pop(){
        int t=s.top();
        s.pop();
        if(t<=0){
            int res=min;
            min=min-t;
            return res;
        }else{
            return t;
        }
    }
    int top(){
        int t=s.top();
        return (t<=0)? min:t;
    }
    int getmin(){
        return min;
    }
    

};

struct Mystack{
    stack<int> s;
    int min;
    void push(int x){
        if(s.empty()){
            min=x;
            s.push(x);
        }
        else if(x<=min){
            s.push((2*x)-min);
            min=x;
        }else{
            s.push(x);
        }
    }

    int pop(){
        int t=s.top();
        s.pop();
        if(t<=min){
            int res=min;
            min=(2*min)-t;
            return res;
        }else{
            return t;
        }
    }
    int top(){
        int t=s.top();
        return (t<=min)? min:t;
    }
    int getmin(){
        return min;
    }
    

};

int main(){

    
     
    mystack s;
    s.push(4);
    s.push(5);
    s.push(8);
    s.push(3);
    s.push(1);
    s.pop(); 
     
    cout<<" Minimum Element from Stack: " <<s.getmin()<<endl;

    cout<<"This is optimized for negitive no. as well:"<<endl;
    Mystack l;
    l.push(4);
   l.push(5);
   l.push(8);
   l.push(3);
   l.push(1);
   l.pop();
    cout<<" Minimum Element from Stack: " <<l.getmin();

    
    return 0;
}