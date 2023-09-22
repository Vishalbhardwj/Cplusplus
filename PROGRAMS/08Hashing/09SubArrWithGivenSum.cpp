#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool subArrOfGivenSumTwo(int arr[],int n,int gs){
    unordered_set<int> s;
    int prefix=0;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        if(prefix==gs){return true;}

        if(s.find(prefix-gs)!=s.end()){
            return true;
        }else{
            s.insert(prefix);
        }
    }
    return false;
}


bool subArrOfGivenSum(int arr[],int n,int gs){

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==gs){
                return true;
            }
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
        int gs;
        cin>>gs;
        cout<<"Brute force Approach:"<<endl;
        cout<<subArrOfGivenSum(arr,n,gs)<<endl;
        cout<<"Optimized Approach:"<<endl;
        cout<<subArrOfGivenSumTwo(arr,n,gs)<<endl;

        

    }
    return 0;
}