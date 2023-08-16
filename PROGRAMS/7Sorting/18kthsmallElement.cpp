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
    cout<<"Enter the kth small E:"<<endl;
    int k;
    cin>>k;

    sort(a,a+n);
    cout<<a[k-1]<<endl;

    


   return 0;
}