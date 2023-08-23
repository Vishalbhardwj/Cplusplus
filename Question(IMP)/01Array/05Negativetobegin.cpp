#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Q  An array contains both positive and negative numbers in random order.
//   Rearrange the array elements so that all negative numbers appear before all positive numbers.

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                swap(a[i],a[count]);
                count++;
            }
        }
        for(auto x:a){
            cout<<x<<" ";
        }
    }

   return 0;
}