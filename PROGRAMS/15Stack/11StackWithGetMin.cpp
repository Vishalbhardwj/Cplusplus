#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct myStack{
    stack<int> m;
    stack<int> a;

    void push(int x){
        if(m.empty())
        { 
            m.push(x);
            a.push(x);
            return;
        }
        m.push(x);
        if(m.top()<=a.top()){
            a.push(x);
        }
    }
    void pop(){
        if(m.top()==a.top()){
            a.pop();
        }
        m.pop();
    }
    int getMin(){
        return a.top();
    }
    int top(){
        return m.top();
    }

};

int main(){
    int t;
    cin>>t;
    while(t--){
        myStack s;
        s.push(47);
        s.push(3);
        s.push(50);
        s.push(8);
        s.push(10);
        s.pop();

        cout<<"This is minimum:"<<s.getMin()<<endl;
    }
    return 0;
}