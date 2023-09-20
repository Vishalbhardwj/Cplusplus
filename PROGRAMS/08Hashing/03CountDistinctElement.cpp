#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int distinctElementOne(int arr[],int n){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s.size();
}
int distinctElementTwo(int arr[],int n){
    unordered_set<int> s(arr,arr+n);
    return s.size();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // Brute force solution :-
        cout<<"Using Brute force solution :"<<endl;
        int res=0;
        
        for(int i=0;i<n;i++){
            bool flag=true;
            for(int j=0;j<i;j++){
                if(arr[i]==arr[j]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                res++;
            }
        }
        cout<<"No of distinct elements are :"<<res<<endl;
        cout<<"Using Optimized approach :"<<endl;

        cout<<distinctElementOne(arr,n)<<endl;
        cout<<distinctElementTwo(arr,n)<<endl;
        



    }
    return 0;
}