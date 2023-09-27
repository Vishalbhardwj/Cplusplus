#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void CountDistinctElemInWin(int arr[],int n,int k){
    unordered_map<int,int> mp;

    for(int i=0;i<k;i++){
        mp[arr[i]]++;
    }
    cout<<mp.size()<<" ";
    for(int i=k;i<n;i++){
        mp[arr[i-k]]--;
        if(mp[arr[i-k]]==0){
            mp.erase(arr[i-k]);
        }
        mp[arr[i]]++;
        cout<<mp.size()<<" ";
    }
}

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
        cout<<"Enter Value of K:"<<endl;
        int k;
        cin>>k;
        
        CountDistinctElemInWin(arr,n,k);
    }
    return 0;
}