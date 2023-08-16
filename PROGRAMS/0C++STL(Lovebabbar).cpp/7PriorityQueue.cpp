#include<iostream>
#include<queue>
using namespace std;


int main(){
    // max_heap : By Default:
    priority_queue<int> pmaxi;

    // min_heap
    priority_queue<int,vector<int> ,greater<int>> pmini;

    pmaxi.push(0);
    pmaxi.push(3);
    pmaxi.push(156);
    pmaxi.push(134);
    pmaxi.push(2);

    cout<<"Printing all Element of priority queue"<<endl;

    int n=pmaxi.size();
    for(int i=0;i<n;i++){
        cout<<pmaxi.top()<<" ";
        pmaxi.pop();
    }cout<<endl;

    pmini.push(2);
    pmini.push(0);
    pmini.push(34);
    pmini.push(20);
    pmini.push(1);

    int nk=pmini.size();
    for(int i=0;i<nk;i++){
        cout<<pmini.top()<<" ";
        pmini.pop();
    }


    
    return 0;
}