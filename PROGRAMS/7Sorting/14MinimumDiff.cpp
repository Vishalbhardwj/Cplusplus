#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // Naive Solution :
    int res=INT16_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            res=min(res,abs(a[j]-a[i]));
        
        }
    }
   cout<<res<<endl;



    // optimized  :
    // sort(a,a+n);
    // int mindiff=INT16_MAX;
    // int diff=0;
    // int res=123456;
    // for(int i=1;i<n;i++){

    //     // diff=a[i]-a[i-1];    

    //     // if(mindiff>diff){
    //     //     mindiff=diff;
    //     // }

    //     res=min(res,a[i]-a[i-1]);
        

    // }
    // cout<<res<<endl;
    // // cout<<mindiff<<endl;
    return 0;
}