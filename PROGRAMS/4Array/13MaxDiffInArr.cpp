#include<iostream>
#include<bits/stdc++.h>
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
        // int maxi=INT16_MIN;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         maxi=max(a[j]-a[i],maxi);
        //     }
        // }
        // cout<<maxi<<endl;

        // Optimized approach :
        int maxi=a[1]-a[0]; 
        int minvalue=a[0];

        for(int j=1;j<n;j++){
            maxi=max(maxi,a[j]-minvalue);
            minvalue=min(minvalue,a[j]);
        }
        cout<<maxi<<endl;



    }



    return 0;
}