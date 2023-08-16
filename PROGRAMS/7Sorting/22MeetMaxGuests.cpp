#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    int MaximumGuests(int a[],int n,int d[],int m){
        sort(a,a+n);
        sort(d,d+m);
        int i=0,j=0;
        int curg=0,res=0;

        while(i<n && j<n){
            if(a[i]<d[j]){
                 curg++; i++;
            }else if(a[i]>d[j]){
                curg--; j++;

            }
            res=max(res,curg);

        }

        return res;
    }

int main(){
    


   
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
    int m;
    cin>>m;
    int d[m];
    for(int i=0;i<m;i++){
    cin>>d[i];
    }

    cout<<MaximumGuests(a,n,d,m)<<endl;



    return 0;
}