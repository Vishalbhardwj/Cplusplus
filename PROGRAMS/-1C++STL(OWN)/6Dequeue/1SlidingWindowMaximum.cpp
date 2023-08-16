#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void WindowSlidingMax(int a[],int n,int k){
    deque<int> dq;
    // Processing First Window:
    for(int i=0;i<k;i++){
        while(!dq.empty() && a[i]>=a[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    // Processing Remaining windows:
    for(int i=k;i<n;i++){
        cout<<a[dq.front()]<<" ";
        while(!dq.empty() && dq.front()<=i-k){
            dq.pop_front();
        }
        while(!dq.empty() && a[i]>=a[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    // Printing the Maximum Element of Last Window:
    cout<<a[dq.front()]<<endl;
}

int main(){
    // Problem: Sliding Window Maximum:  VERY Nice Problem:

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"Enter K"<<":"<<endl;
        int k;
        cin>>k;
        WindowSlidingMax(a,n,k);
    }

    return 0;


}