#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int duplicateNum(vector<int> &a){
    int slow =a[0],fast=a[0];
    do{
        slow=a[slow];
        fast=a[a[fast]];
    }while(slow!=fast);

    slow=a[0];
    while(slow!=fast){
        slow=a[slow];
        fast=a[fast];
    }
    return slow;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        
        for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v[i]=k;
        }
        for(auto x:v){
            cout<<x;
        }
        cout<<endl;
        int value=duplicateNum(v);
        cout<<value<<endl;
        
    }
    return 0;
}


