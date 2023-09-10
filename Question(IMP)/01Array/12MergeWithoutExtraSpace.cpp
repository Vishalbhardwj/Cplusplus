#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reArrange(int arr2[],int m){
    for(int i=0;i<m-1;i++){
        if(arr2[i]>arr2[i+1]){
            swap(arr2[i],arr2[i+1]);
        }
    }
}

void merge(int arr1[],int arr2[],int n,int m){
    int i=0,j=0;
    while(i<n){
        if(arr1[i]>arr2[j]){
            swap(arr1[i],arr2[j]);
            reArrange(arr2,m);
        }
        i++;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr1[n],arr2[m];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++){
            cin>>arr2[i];
        }
        merge(arr1,arr2,n,m);
        for(int i=0;i<n;i++){
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<m;i++){
            cout<<arr2[i]<<" ";
        }


    }
    return 0;
}
