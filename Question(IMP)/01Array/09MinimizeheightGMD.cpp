#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMinDiff(int a[], int n, int k) {
        if(n==1) return 0;
         sort(a,a+n);
        int res=a[n-1]-a[0];
        int smallest=a[0]+k;
        int tallest=a[n-1]-k;
        
        int cs,ct;
        for(int i=0;i<n-1;i++){
            cs=min(smallest,a[i+1]-k);
            ct=max(tallest,a[i]+k);
            if(cs>=0){
                res=min(res,ct-cs);
            }
        }
        return res;
    }

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
        cout<<"Enter value of k:"<<endl;
        int k;
        cin>>k;
        cout<<getMinDiff(a,n,k);

    }

   return 0;
}