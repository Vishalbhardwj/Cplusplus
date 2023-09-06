#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int unionCount(int a[],int n,int b[],int m){
    
    int count=0;
    int i=0, j=0;
    while(i<n&&j<m){
        if(i!=0&&a[i]==a[i-1]){i++; continue;}
        if(j!=0&&b[j]==b[j-1]){j++; continue;}

        if(a[i]<b[j]){
        i++;
        count++;
        }else if(b[j]<a[i]){
            j++;
            count++;
        }else{ 
            i++;
            j++;
            count++;
        }
    }
    while(i<n){
        if(a[i]!=a[i-1]){
            cout<<a[i]<<" ";
            count++;
        }
        i++;
    }
    while(j<m){
        if(b[j]!=b[j-1]){
            cout<<b[j]<<" ";
            count++;
        }
        j++;
    }
    return count;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
       
        int count=unionCount(a,n,b,m);
        cout<<count;

    }

   return 0;
}