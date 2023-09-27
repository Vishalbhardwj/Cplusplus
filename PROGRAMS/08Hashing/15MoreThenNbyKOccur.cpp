#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void moreThenNbyKOcc(int arr[],int n,int k){                           //Work Very Well for all cases.
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto x :mp){
        if(n/k<x.second){
            cout<<x.first<<" ";
        }
    }

}

// There is a variation of it called moore's voting algo to find the count More then N/k occurence.


int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<"Enter n:"<<endl;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Enter k:"<<endl;
        int k;
        cin>>k;
        moreThenNbyKOcc(arr,n,k);
        cout<<endl;

    }

    return 0;
}