#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        stack<int> s;
        s.push(arr[0]);
        cout<<-1<<" ";
        for(int i=1;i<n;i++){
            while(s.empty()==false&&s.top()<=arr[i]){
                s.pop();
            }
            int prevgrea=s.empty()?-1:s.top();
            cout<<prevgrea<<" ";
            s.push(arr[i]);
        }

    }
    return 0;
}