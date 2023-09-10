#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n){
        long long maxEnding=arr[0];
        long long res=arr[0];
        for(int i=1;i<n;i++){
        if(arr[i]>arr[i]+maxEnding){
            maxEnding=arr[i];
        }else{
            maxEnding=arr[i]+maxEnding;
        }
            res=max(res,maxEnding);
        }
        return res;
        
        
        // Your code here
        
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
        long long m=maxSubarraySum(arr,n);
        cout<<m<<endl;

    }
   
}