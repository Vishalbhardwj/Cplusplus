#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int LargeElement(int arr[],int n,int max,int ans){
    for(int i=0;i<n;i++){
        if(max<arr[i]){    
            max=arr[i];
            ans=i;
        }
    }
    return ans;
}

int main(){

    // Way 1;

    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     int arr[n];
    //     cout<<"Enter elements"<<endl;
    //     for(int i=0;i<n;i++){
    //         cin>>arr[i];
    //     }
    //     int max=0,ans=1;                  you can use INT_MIN AS WELL IN PLACE OF MAX=0.
    //     cout<<LargeElement(arr,n,max,ans)<<endl;
    // }


    // Way 2:No diff in time complexity to above code
    int n;   
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[res]<arr[i]){
            res=i;
        }
    }
    cout<<res<<endl;

    return 0;
}