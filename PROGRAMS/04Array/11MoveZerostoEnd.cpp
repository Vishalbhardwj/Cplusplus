#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Way 1 Move zero to End:
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // for(int i=0;i<n;i++){
    //     if(a[i]==0){
    //         for(int j=i+1;j<n;j++){
    //             if(a[j]!=0){
    //                 swap(a[i],a[j]);
    //                  break;
    //             }
                
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }



    // Way 2 : time complexity O(n).
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[count]);
            count++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    

    
    // Way : Asked by Vaibhav 
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
   
    // for(int i=0;i<n;i++){
    //     if((a[i]%10)==0){

    //         for(int j=i+1;j<n;j++){
               
    //             if((a[j]%10)!=0){
    //                 swap(a[i],a[j]);
    //                  break;
    //             }
                
                
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     if(a[i]==0){
    //         for(int j=i+1;j<n;j++){
    //             if(a[j]!=0){
    //                 swap(a[i],a[j]);
    //                  break;
    //             }
                
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    return 0;
}
