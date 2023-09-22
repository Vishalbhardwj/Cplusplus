#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool subArrZeroSum(int arr[],int n){
    
    for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
                if(sum==0){
                    return true;
                }
            }
        }
    return false;
}

bool subArrZeroSumtwo(int arr[],int n){

    unordered_set<int> s;
    int prefix=0;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        if(prefix==0){
            return true;
        }
        if(s.find(prefix)!=s.end()){
            return true;
        }else{
            s.insert(prefix);
        }

    }
    return false;
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
        cout<<"brute force Approach:"<<endl;
        cout<<subArrZeroSum(arr,n)<<endl;
    
        cout<<"Optimized approach:"<<endl;
        cout<<subArrZeroSumtwo(arr,n)<<endl;

       

    }
    return 0;
}