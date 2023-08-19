#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        pair<int,int> v[n];

        for(int i=0;i<n;i++){
            cin>>v[i].first;
            cin>>v[i].second;
        }
        sort(v,v+n);
        
       int res=0;
        for(int i=1;i<n;i++){
            if(v[res].second>=v[i].first){
                v[res].second=max(v[i].second,v[res].second);
            }else{
                res++; 
                v[res]=v[i];
            }
        }
        for(int i=0;i<=res;i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
       

    }
    return 0;
}