#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int a[], int n){
         long res=a[0];
         long maxending=a[0];
         
        for(int i=1;i<n;i++){
            maxending+=a[i];
           if(maxending<a[i]){
           maxending=a[i];
           }
            if(res<maxending){
                res=maxending;
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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<maxSubarraySum(a,n)<<endl;

    }


   return 0;
}