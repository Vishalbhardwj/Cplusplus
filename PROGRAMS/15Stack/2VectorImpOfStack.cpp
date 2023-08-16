#include<iostream>
#include<vector>
using namespace std;

struct stack{
    vector <int> v;
    void push(int x){
        v.push_back(x);
    }
    int pop(){
        int res=v.back();
        v.pop_back();
        return res;
    }
    int size(){
        return v.size();
    }
    int peek(){
        return v.back();
    }
    bool empty(){
        return v.empty();
    }

};


int main(){
    // Vector implementation of stack:
    stack s;
    s.push(34);
    s.push(12);
    s.push(100);
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.empty()<<endl;
   
    

   

    
    

}