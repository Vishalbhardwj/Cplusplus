#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //  cout<<"Enter first Sorted Array:"<<endl;
    //  cout<<"But Size first:"<<endl;
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // cout<<"Enter Second Sorted Array:"<<endl; 
    // cout<<"But Size first:"<<endl;
    // int o;
    // cin>>o;
    // int b[o];
    // for(int i=0;i<o;i++){
    // cin>>b[i];
    // }
    // int aux[n+o];
    // int index =0;
    // for(int i=0;i<n;i++){
    //     aux[index++]=a[i];
    // }
    // for(int i=0;i<o;i++){
    //     aux[index++]=b[i];
    // }
    // sort(aux,aux+n+o);
   
    // cout<<endl;
    // for(int i=0;i<index;i++){
    //     if(aux[i]!=aux[i-1]){
    //         cout<<aux[i]<<" ";
    //     }
    // }


    // Optimized approach :

    cout<<"Enter first Sorted Array:"<<endl;
     cout<<"But Size first:"<<endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter Second Sorted Array:"<<endl; 
    cout<<"But Size first:"<<endl;
    int o;
    cin>>o;
    int b[o];
    for(int i=0;i<o;i++){
    cin>>b[i];
    }
    int i=0,j=0;
    while(i<n&&j<o){

        if(i>0&&a[i]==a[i-1]){
            i++;
            continue;
        }

        if(j>0 &&b[j]==b[j-1]){
            j++;
            continue;
        }

        if(a[i]<b[j]){
          cout<<a[i]<<" ";
          i++;

        }
        else if(a[i]>b[j]){
            cout<<b[j]<<" ";
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        
    }
    while(i<n){
        if(i>0&&a[i]!=a[i-1]){
            cout<<a[i]<<" ";
           
        }
         i++;
    }
    while(j<o){
        if(j>0&&b[j]!=b[j-1]){
            cout<<b[j]<<" ";
            
        }
        j++;
    }


    return 0;
}