#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void intersection(int arr[],int brr[],int n,int m){
    unordered_set<int> s(brr,brr+m);
    for(int i=0;i<n;i++){
        if(s.find(arr[i])!=s.end()){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){ 
        int n,m;
        cin>>n>>m;
        int arr[n],brr[m];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<m;i++){
            cin>>brr[i];
        }
        cout<<"Brute force approach:"<<endl;
        for(int i=0;i<n;i++){
            bool flag=false;
            for(int j=0;j<m;j++){
                if(arr[i]==brr[j]){
                    flag=true;
                    break;
                }
            }
            if(flag){
                cout<<arr[i]<<" ";
            }
        }
        
        cout<<endl;
        
        

        cout<<"Optimized Approach:"<<endl;
        intersection(arr,brr,n,m);

    }
    return 0;
}