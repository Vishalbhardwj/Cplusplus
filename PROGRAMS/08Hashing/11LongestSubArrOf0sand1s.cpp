#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int LongSubArrOfOand1(int arr[],int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[i]=-1;
        }
    }
    
    int pre=0,len=0;
    for(int i=0;i<n;i++){
        pre+=arr[i];
        if(pre==0){
            len=i+1;
        }
        if(mp.find(pre)==mp.end()){
            mp[pre]=i;
        }
        if(mp.find(pre)!=mp.end()){
            len=max(len,i-mp[pre]);
        }
       
    }
    return len;

}

int LongestSubArrOf0sand1s(int arr[],int n){
     int res=0;
        for(int i=0;i<n;i++){
            int zeros=0,ones=0;
            for(int j=i;j<n;j++){
                if(arr[j]==0){
                    zeros++;
                }else{
                    ones++;
                }
                if(zeros==ones){
                    res=max(res,zeros+ones);
                }
            }
        }
        return res;
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
        cout<<"Brute force Approach"<<endl;
        cout<<LongestSubArrOf0sand1s(arr,n)<<endl;
        cout<<"Optimized Approach:"<<endl;
        cout<<LongSubArrOfOand1(arr,n)<<endl;

       
    }
    return 0;
}