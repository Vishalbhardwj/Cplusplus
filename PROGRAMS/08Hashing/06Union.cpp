#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Union(int arr[],int brr[],int n,int m){
    unordered_set<int> s(arr,arr+n);
    for(int i=0;i<m;i++){
        s.insert(brr[i]);
    }
    return s.size();

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
        for(int j=0;j<m;j++){
            cin>>brr[j];
        }
        cout<<"Brute Force Approach:"<<endl;
        // having time complexity very high.
    
        cout<<"Optimized Approach:"<<endl;
        cout<<Union(arr,brr,n,m)<<endl;


    }
}