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
        vector<int> v;
        stack<int> s;
        s.push(arr[n-1]);
        v.push_back(-1);
        for(int i=n-2;i>=0;i--){
            while(s.empty()==false&&s.top()<=arr[i]){
                s.pop();
            }
            int ng=s.empty()?-1:s.top();
            v.push_back(ng);
            s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        for(auto x :v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
