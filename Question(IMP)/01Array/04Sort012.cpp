#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sort012(int a[],int n){
    int i=0,j=0,k=n-1;
    while(j<=k){
        if(a[j]==0){
            swap(a[j],a[i]);
            i++;
            j++;
        }else if(a[j]==2){
            swap(a[j],a[k]);
            k--;
        }else{
            j++;
        }
    }
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort012(a,n);

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

    }

   return 0;
}