#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Q Given an array arr[] and an integer K where K is smaller than size of array,
//  the task is to find the Kth smallest element in the given array.
//   It is given that all array elements are distinct.

int lomuto(vector<int> &a,int l,int r){
    int pivot=a[r];
    int i=l-1;
    for(int j=l;j<=r;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);    
    return i+1;
}
int kthSmallest(vector<int> &a,int l,int r,int k){
while(l<=r){
    int p=lomuto(a,l,r);
    if(p==k-1){
        return a[p];
    }else if(k-1<p){
        r=p-1;
    }else{
        l=p+1;
    }
}
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cout<<"Enter k"<<endl;
        int k;
        cin>>k;

        cout<<kthSmallest(v,0,n-1,k);

    }

   return 0;
}