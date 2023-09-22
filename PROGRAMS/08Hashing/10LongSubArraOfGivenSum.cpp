#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int LongestGivenSumSubArr(int arr[],int n,int gs){
    int res=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
                if(sum==gs){
                    res=max(res,j-i+1);
                }
            }
        }
        return res;
}

int LongestGivenSumSubArrTwo(int arr[],int n,int gs){
    unordered_map<int,int> mp;
    int res=0,prefix=0;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        if(prefix==gs){
            res=i+1;
        }
        if(mp.find(prefix)==mp.end()){
            mp[prefix]=i;
        }
        if(mp.find(prefix-gs)!=mp.end()){
            res=max(res,i-mp[prefix-gs]);
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
        int gs;
        cin>>gs;
        cout<<"Brute force Approach:"<<endl;
        cout<<LongestGivenSumSubArr(arr,n,gs)<<endl;
        cout<<"Optimized Approach:"<<endl;
        cout<<LongestGivenSumSubArrTwo(arr,n,gs)<<endl;
       

    }
    return 0;
}
