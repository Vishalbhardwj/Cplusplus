#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int LongComSubArrWithGivenSum(int arr[],int brr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int sum1=0,sum2=0;
        for(int j=i;j<n;j++){
            sum1+=arr[j];
            sum2+=brr[j];
            if(sum1==sum2){
                res=max(res,j-i+1);
            }
        }
    }
    return res;
}
int LongComSubArrWithGivenSumTwo(int arr[],int brr[],int n){
    unordered_map<int,int> mp;
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=arr[i]-brr[i];
    }
    int prefix=0;
    int res=0;
    for(int i=0;i<n;i++){
        prefix+=temp[i];
        if(prefix==0){
            res=i+1;
        }
        if(mp.find(prefix)==mp.end()){
            mp[prefix]=i;
        }
        if(mp.find(prefix)!=mp.end()){
            res=max(res,i-mp[prefix]);
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
        int brr[n];
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
        cout<<"Brute force Approach:"<<endl;
        cout<<LongComSubArrWithGivenSum(arr,brr,n)<<endl;
        cout<<"Optimized Approach:"<<endl;
        cout<<LongComSubArrWithGivenSumTwo(arr,brr,n)<<endl;

       
    }
    return 0;
}