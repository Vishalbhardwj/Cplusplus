#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Normal Arr Based Stack Implementation.
struct mystack{
    int *arr;
    int cap;
    int top;
    mystack(int c){
        arr=new int[c];
        cap=c;
        top=-1;
    }

    void push(int d){
        if(top==cap-1){
            cout<<"Stack's full!"<<endl;
            return;
        }
        top++;
        arr[top]=d;
    }
    int pop(){
        if(top==-1){
            cout<<"Stack's empty!"<<endl;
            return INT16_MIN;
        }
        int res=arr[top];
        top--;
        return res;
    }
    bool empty(){   
        return(top==-1);
    }
    int peak(){
        if(top==-1){
            cout<<"Stack's empty!"<<endl;
            return INT16_MIN;
        }
        return arr[top];
    }
    int size(){
        return (top+1);
    }
};

// Vector based Stack Implementation.
struct myStack{
    vector<int> v;
    
    void push(int d){
        v.push_back(d);
    }
    int pop(){
        int res=v.back();
        v.pop_back();
        return res;
    }
    bool empty(){
        return v.empty();
    }
    int size(){
        return v.size();
    }
    int peak(){
        return v.back();
    }
};


int main(){
    

    
    cout<<"Array based Implementation:"<<endl;
    mystack s(7);
    s.push(34);
    cout<<s.peak()<<endl;
    s.push(100);
    cout<<s.size()<<endl;
    s.push(256);
    s.push(10);
    s.push(11);
    cout<<s.peak()<<endl;
    cout<<s.size()<<endl;
    s.push(9);
    s.push(1);
    cout<<s.peak()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peak()<<endl;
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peak()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peak()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peak()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    

    cout<<"Vector based Implementation:"<<endl;

    myStack k;
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