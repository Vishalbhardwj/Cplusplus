#include<bits/stdc++.h>
#include<iostream>
using namespace std;

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
        // int flag=0;
        // for(int i=0;i<n;i++){
        //     flag=1;
        //     for(int j=i+1;j<n;j++){
        //         if(a[j]>=a[i]){
        //             flag=0;
        //             break;
        //         }
        //     }
        //     if(flag){
        //         cout<<a[i]<<" ";
        //     }
        // }
        
        int cur_l=a[n-1];
        cout<<cur_l<<" ";
        for(int i=n-2;i>=0;i--){
            if(cur_l<a[i]){ 
                cur_l=a[i];
                cout<<cur_l<<" ";
            }
        }


        


    }
    return 0;
}