#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        // Naive Approach :
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // int res=1;
        // int len=1;
        // for(int i=0;i<n;i++){
        //     len=1;
        //     for(int j=i+1;j<n;j++){
        //         if(a[j]%2==0&&a[j-1]%2!=0||a[j-1]%2==0&&a[j]%2!=0){
        //             len+=1;
        //         }else{
        //             break;
        //         }
            
        //     }  
        //     res=max(res,len);
        // }
        // cout<<res<<endl;

        // Optimized Approach by kadane's Algorithm:
        
        int maxlen=1;
        int len=1;
        for(int i=1;i<n;i++){
            if(a[i]%2==0&&a[i-1]%2!=0||a[i-1]%2==0&&a[i]%2!=0){
                    len+=1;
                    maxlen=max(maxlen,len);
            }else{
                len=1;
            }
        }
        cout<<maxlen<<endl;

        

       
        
        
    }
    return 0;
}