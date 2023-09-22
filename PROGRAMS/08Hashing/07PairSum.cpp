#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool PairSum(int arr[],int n,int gs){

     for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(gs==arr[i]+arr[j]){
                    return true;
                }

            }
        }
        return false;
}

bool PairSum2(int arr[],int n,int gs){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        if(s.find(gs-arr[i])!=s.end()){
            return true;
        }else{
            s.insert(arr[i]);
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
        cout<<"Enter Given sum"<<endl;
        int gs;
        cin>>gs;
        cout<<"Brute force Approach:"<<endl;
        cout<<PairSum(arr,n,gs);
        cout<<endl;
        cout<<"Optimized Approach:"<<endl;
        cout<<PairSum2(arr,n,gs);

       

    }
    return 0;
}