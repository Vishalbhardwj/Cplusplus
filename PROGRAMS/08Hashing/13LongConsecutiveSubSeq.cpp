#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LongConsecutiveSubSeq(int arr[],int n){
    unordered_set<int> s(arr,arr+n);
    int maxi=arr[0],mini=arr[0];
    for(int i=0;i<n;i++){                 // Taking out maximum and minimum.
        maxi=max(arr[i],maxi);
        mini=min(arr[i],mini);
    }
    int res=0,count=0;
    for(int i=mini;i<=maxi;i++){           // Range Wise Checking:
        if(s.find(i)!=s.end()){
            count++;
            res=max(res,count);
        }else{
            count=0;
        }
    }
    return res;
}


int LongConsecutiveSubSeqOne(int arr[],int n){

    sort(arr,arr+n);
    int res=1,count=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]) continue;
        if(arr[i]-1==arr[i-1]){
            count++;
            res=max(res,count);
        }else{
            count=1;
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
        cout<<LongConsecutiveSubSeqOne(arr,n)<<endl;
        cout<<"Optimized Approach"<<endl;
        cout<<LongConsecutiveSubSeq(arr,n)<<endl;



    }
}