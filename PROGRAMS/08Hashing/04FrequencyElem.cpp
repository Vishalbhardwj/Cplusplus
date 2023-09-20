#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

void freqElement(int arr[],int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}


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
        // Brute force approach:
        cout<<"Using Brute Force Approach:-"<<endl;
        //In this Code Modification of array took place :
        for(int i=0;i<n;i++){
            int freq=0;
            if(arr[i]!=INT16_MIN){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    freq++;
                    arr[j]=INT16_MIN;
                }
            }
            cout<<arr[i]<<" "<<freq+1<<endl;
            }
        }
        int m;
        cin>>m;
        int ar[m];
        for(int i=0;i<m;i++){
            cin>>ar[i];
        }
        cout<<"Optimized Approach"<<endl;
        freqElement(ar,m);




    }
    return 0;
}