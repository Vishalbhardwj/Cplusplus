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


        // Naive solution:
        // int trap_w=0;
        // for(int i=1;i<n-1;i++){
        //     int lmax=a[i];
        //     for(int j=0;j<i;j++){   // Here inside we are taking out lmax and rmax for correspoding bar:
        //         lmax=max(lmax,a[j]);
        //     }
        //     int rmax=a[i];
        //     for(int k=i+1;k<n;k++){
        //         rmax=max(rmax,a[k]);
        //     }
        //     trap_w+=(min(lmax,rmax)-a[i]);
        // }
        // cout<<trap_w<<endl;



        // Optimized Approach:
        // In this Approach we have already precomputed lmax  and rmax for each bar :

        int trapped_water=0;

        int lmax[n],rmax[n];
        lmax[0]=a[0];
        for(int i=1;i<n;i++){
            lmax[i]=max(lmax[i-1],a[i]);
        }
        rmax[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
            rmax[i]=max(rmax[i+1],a[i]);
        }
        for(int i=1;i<n-1;i++){
            trapped_water+=(min(lmax[i],rmax[i])-a[i]);
        }
        cout<<trapped_water<<endl;




        
    }
    return 0;
}