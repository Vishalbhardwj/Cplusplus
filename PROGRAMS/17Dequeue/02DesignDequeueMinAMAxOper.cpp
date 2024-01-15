#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Designing a dataStructure for Min & Max Operation!

struct mydsa{
    deque<int> dq;

    void insertMin(int x){
        dq.push_front(x);
    }
    void insertMax(int x){
        dq.push_back(x);
    }
    int getMin(){
        return dq.front();
    }
    int getMax(){
        return dq.back();
    }
    int extractMin(){
        int x=dq.front();
        dq.pop_front();
        return x;
        
    }

    int extractMax(){
        int x=dq.back();
        dq.pop_back();
        return x;
    }
};

int main(){
    mydsa ds;
    ds.insertMin(5);
    ds.insertMax(10);
    ds.insertMin(3);
    ds.insertMax(15);
    ds.insertMin(2);
    cout<<ds.getMin()<<endl;
    cout<<ds.getMax()<<endl;
    ds.insertMin(1);
    cout<<ds.getMin()<<endl;
    ds.insertMax(20);
    cout<<ds.getMax()<<endl;
   
    

    return 0;
}