#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        cout<<"Enter the size of array"<<endl;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v.push_back(k);
        }
        
      
        int prefixsum[n];
        prefixsum[0]=v[0];
        for(int i=1;i<n;i++){
            prefixsum[i]+=v[i-1];
        }
        cout<<"Enter the leftMost and rightMost"<<endl;
        int lm,rm;
        cin>>lm>>rm;
        if(lm==0){
            cout<<prefixsum[rm]<<endl;
        }else{
            cout<<prefixsum[rm]-prefixsum[lm-1]<<endl;
        }


    }
    return 0;
}